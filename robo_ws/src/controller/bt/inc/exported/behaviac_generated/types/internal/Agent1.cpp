﻿// -------------------------------------------------------------------------------
// THIS FILE IS ORIGINALLY GENERATED BY THE DESIGNER.
// YOU ARE ONLY ALLOWED TO MODIFY CODE BETWEEN '///<<< BEGIN' AND '///<<< END'.
// PLEASE MODIFY AND REGENERETE IT IN THE DESIGNER FOR CLASS/MEMBERS/METHODS, ETC.
// -------------------------------------------------------------------------------

#include "Agent1.h"
#include <ros/ros.h>
#include <ros/package.h>
#include <fsm/command_acc.h>
#include <mavros_msgs/CommandBool.h>

//#include <bt/BT.cpp>

#include "iostream"
using namespace std;
///<<< BEGIN WRITING YOUR CODE FILE_INIT
fsm::command_acc waypoint;
fsm::command_acc bt_fsm;
///<<< END WRITING YOUR CODE

extern Agent1* g_MakeTreeAgent;

static geometry_msgs::PoseStamped aim;
static bool isAir;
static int cmdd=0;
static int bt=1;
static int btt=0;


static int ready_fly=0;
static int cmdd_=0;


void UdpServer(const char* ip,const uint16_t cport,const int UAVID)
{
    ROS_WARN("UDP %d",UAVID);
    std::string ss;
    geometry_msgs::PoseStamped offset;
    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(sock_fd < 0)
    {
        ROS_ERROR("Network Error");
        return;
    }
    struct sockaddr_in addr_client;
    int len;
    memset(&addr_client, 0, sizeof(struct sockaddr_in));
    addr_client.sin_family = AF_INET;
    addr_client.sin_addr.s_addr = inet_addr(ip);
    addr_client.sin_port = htons(cport);
    len = sizeof(addr_client);

    switch(UAVID){
        case 1:{
            offset.pose.position.x = 0;
            offset.pose.position.y = 0;
            offset.pose.position.z = 0;
            break;
        }
        case 2:{
            offset.pose.position.x = 0;
            offset.pose.position.y = 0;
            offset.pose.position.z = 0;
            break;
        }
        case 3:{
            offset.pose.position.x = -0.3;
            offset.pose.position.y = -0.3;
            offset.pose.position.z = 0;
            break;
        }
        case 4:{
            offset.pose.position.x = -0.3;
            offset.pose.position.y = 0.3;
            offset.pose.position.z = 0;
            break;
        }
    }


    int sdlen;
    int send_num;
    char send_buf[100];

    ros::Rate rate(10.0);

    while(ros::ok())
    {
        memset(&send_buf, 0, sizeof(send_buf));
        sdlen=0;

       // sprintf(send_buf+sdlen,"%d",cmdd>=9?9:cmdd);
        sprintf(send_buf+sdlen,"%d",cmdd);
        sdlen=int(strlen(send_buf));
        send_buf[sdlen]   = ',';
        send_buf[sdlen+1] = '\0';
        sdlen=int(strlen(send_buf));
        sprintf(send_buf+sdlen,"%.3lf",aim.pose.position.x+offset.pose.position.x);
        
        sdlen=int(strlen(send_buf));
        send_buf[sdlen]   = ',';
        send_buf[sdlen+1] = '\0';
        sdlen=int(strlen(send_buf));
        sprintf(send_buf+sdlen,"%.3lf",aim.pose.position.y+offset.pose.position.y);
        
        sdlen=int(strlen(send_buf));
        send_buf[sdlen]   = ',';
        send_buf[sdlen+1] = '\0';
        sdlen=int(strlen(send_buf));
        sprintf(send_buf+sdlen,"%.3lf",aim.pose.position.z+offset.pose.position.z);

        // sdlen=int(strlen(send_buf));
        // send_buf[sdlen]   = ',';
        // send_buf[sdlen+1] = '\0';
        // sdlen=int(strlen(send_buf));
        // sprintf(send_buf+sdlen,"%d",bt);

        send_num = sendto(sock_fd, send_buf, ssize_t(strlen(send_buf)), 0, (struct sockaddr *)&addr_client, len);
        //ROS_INFO("Rec: %d, %.3lf, %.3lf, %.3lf, %d",cmdd,aim.pose.position.x,aim.pose.position.y,aim.pose.position.z,bt);
        ROS_INFO("Rec: %d, %.3lf, %.3lf, %.3lf",cmdd,aim.pose.position.x,aim.pose.position.y,aim.pose.position.z);


        if(send_num < 0)
        {
            ROS_ERROR("Send Fail!, UAV = %d",UAVID);
            //perror("sendto error:");
            //exit(1);
        }
        //ROS_INFO("Current Pub: %s",send_buf);
        //std::cout<<ssize_t(strlen(send_buf))<<std::endl;
        rate.sleep();
    }

}

void CmddPuber()
{
    ros::Rate rate(20.0);
    while(ros::ok()){
        switch(cmdd){
        /*
            case  1:ROS_INFO("Offboard publish!");break;
            case  2:ROS_INFO("Arm publish!");break;
            case  4:ROS_INFO("Land publish!");break;
            */
            case 4:
            {
                if(isAir==true){
                    aim.pose.position.z =0.3;
                }
                else ROS_ERROR("Enable and take off first");
                break;
            }
            case  3:
            {   
                break;
            }
            case  9:isAir=true;break;
            case 10:{
                if(isAir==true){
                    aim.pose.position.x = aim.pose.position.x + 0.01;
                }
                else 
                {
                    ROS_ERROR("Enable and take off first");
                }
                break;
            }
            case 20:{
                if(isAir==true){
                    aim.pose.position.x = aim.pose.position.x - 0.01;
                }
                else ROS_ERROR("Enable and take off first");
                break;
            }
            case 30:{
                if(isAir==true){
                    aim.pose.position.y = aim.pose.position.y + 0.01;
                }
                else ROS_ERROR("Enable and take off first");
                break;
            }
            case 40:{
                if(isAir==true){
                    aim.pose.position.y = aim.pose.position.y - 0.01;
                }
                else ROS_ERROR("Enable and take off first");
                break;
            }
            case 50:{
                if(isAir==true){
                    aim.pose.position.z = aim.pose.position.z + 0.005;
                }
                else ROS_ERROR("Enable and take off first");
                break;
            }
            case 60:{
                if(isAir==true){
                    aim.pose.position.z = aim.pose.position.z - 0.005;
                }
                else ROS_ERROR("Enable and take off first");
                break;
            }
            case 99: return ;
            default: break;
        }
        rate.sleep();

    }
}

void UdpListen(const uint16_t cport)
{
    ros::NodeHandle NH;
    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(sock_fd < 0)
    {
        ROS_ERROR("Network Error");
        return;
    }

    /* 将套接字和IP、端口绑定 */
    struct sockaddr_in addr_lis;
    int len;
    memset(&addr_lis, 0, sizeof(struct sockaddr_in));
    addr_lis.sin_family = AF_INET;
    addr_lis.sin_port = htons(cport);
    /* INADDR_ANY表示不管是哪个网卡接收到数据，只要目的端口是SERV_PORT，就会被该应用程序接收到 */
    addr_lis.sin_addr.s_addr = htonl(INADDR_ANY);  //自动获取IP地址
    len = sizeof(addr_lis);

    /* 绑定socket */
    if(bind(sock_fd, (struct sockaddr *)&addr_lis, sizeof(addr_lis)) < 0)
    {
      perror("bind error:");
      exit(1);
    }


    int recv_num;
    char recv_buf[100];
    const char dot[2] = ",";
    struct sockaddr_in addr_client;

    while(ros::ok()){
        char *p;
        int ent=0;
        int cmd;
        double px,py,pz;

        recv_num = recvfrom(sock_fd, recv_buf, sizeof(recv_buf), 0, (struct sockaddr *)&addr_client, (socklen_t *)&len);

        //if(recv_num < 0||abs(recv_num-19)>3)
        if(recv_num < 0)
        {
            ROS_ERROR("Recv Fail!");
            continue;
        }
        recv_buf[recv_num] = '\0';
//      ROS_INFO("Rec: %s, len=%d",recv_buf,recv_num);

        p = strtok(recv_buf,dot);
        sscanf(p,"%d",&cmd);
        p=strtok(NULL,dot);
        sscanf(p,"%lf",&px);
        p=strtok(NULL,dot);
        sscanf(p,"%lf",&py);
        p=strtok(NULL,dot);
        sscanf(p,"%lf",&pz);
        p=strtok(NULL,dot);
        sscanf(p,"%d",&bt);
        // if(cmd!=6  &&  cmd!=7)
        // {
        //   aim.pose.position.x=px;
        //   aim.pose.position.y=py;
        //   aim.pose.position.z=pz;
        // }
        //ROS_INFO("getting: %d, %.3lf, %.3lf, %.3lf",cmd,aim.pose.position.x,aim.pose.position.y,aim.pose.position.z);
       
        // if(cmd!=0&&cmd!=cmdd_)
        // {
        //     cmdd_=cmd;
        //     cmdd=cmd;
        //     flag_change=false;
        // }

        //  switch (cmdd)
        // {
        // case 0:
        //     if(ready_fly==1)
        //     cout<<"Ready Fly"<<endl;
        //     else
        //     ROS_INFO("Waiting");
        //     break;
        // }
    }

}


void PrintInfo(){
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>--------<<<<<<<<<<<<<<<<<<<<<<<<<<< "<< std::endl;
    std::cout << "Input the flag:  "<< std::endl;
    std::cout << " 1 for Offboard"<< std::endl;
    std::cout << " 2 for Arm"<< std::endl;
    std::cout << " 3 for Free Fly"<< std::endl;
    std::cout << " 4 for Land"<< std::endl;
    std::cout << " 5 for Disarm"<< std::endl;
    std::cout << " 6 for Waypoints"<< std::endl;
    std::cout << " 7 for ASCUP debug"<< std::endl;
    std::cout << " 9 for Static"<< std::endl;
    std::cout << "10 for Low speed in aim +x"<< std::endl;                
    std::cout << "20 for Low speed in aim -x"<< std::endl;
    std::cout << "30 for Low speed in aim +y"<< std::endl;
    std::cout << "40 for Low speed in aim -y"<< std::endl;
    std::cout << "50 for Low speed in aim +z"<< std::endl;
    std::cout << "60 for Low speed in aim -z"<< std::endl;
    std::cout << "99 for End"<< std::endl;
    std::cin>> cmdd;
    switch(cmdd){
        case  1:ROS_WARN("Offboard publish!");break;
        case  2:ROS_WARN("Arm publish!");break;
        case  4:ROS_WARN("Land publish!");break;

    }

}

Agent1::Agent1()
{
///<<< BEGIN WRITING YOUR CODE CONSTRUCTOR
ROS_INFO("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
ros::NodeHandle NH;
waypoint.command=0;
waypoint.pos_sp[0]=4;
waypoint.pos_sp[1]=5;
waypoint.pos_sp[2]=6;
    new std::thread(&CmddPuber);
    new std::thread(&UdpServer,"127.0.0.1",12001,1);
    new std::thread(&UdpListen,12002);
   ros::Rate rate(1);
// for(int h=1;h<5;h++)
//   {
//    bt_way.publish(waypoint);
//    rate.sleep();
//   }
  //g_MakeTreeAgent->takeoff();
 ///<<< END WRITING YOUR CODE 
    aim.pose.position.y = 0;
    aim.pose.position.x = 0;
    aim.pose.position.z = 0.8;
}

Agent1::~Agent1()
{
///<<< BEGIN WRITING YOUR CODE DESTRUCTOR

///<<< END WRITING YOUR CODE 
}

void Agent1::takeoff()
{
///<<< BEGIN WRITING YOUR CODE takeoff
ROS_INFO("takeoff");
cmdd=9;

btt=bt;
while(bt==btt)
{}
btt=bt;
///<<< END WRITING YOUR CODE
}

void Agent1::ring1()
{
///<<< BEGIN WRITING YOUR CODE
ROS_INFO("ring  1");
cmdd=71;

btt=bt;
while(bt==btt)
{}
btt=bt;

///<<< END WRITING YOUR CODE
}

void Agent1::ring2()
{	
///<<< BEGIN WRITING YOUR CODE sen_waypoint
ROS_INFO("ring  2");
cmdd=72;

btt=bt;
while(bt==btt)
{}
btt=bt;

//g_MakeTreeAgent->task4();
///<<< END WRITING YOUR CODE
}

void Agent1::ring15()
{
///<<< BEGIN WRITING YOUR CODE takeoff

ROS_INFO("ring  15");
cmdd=715;

btt=bt;
while(bt==btt)
{}
btt=bt;
//g_MakeTreeAgent->task5();
///<<< END WRITING YOUR CODE
}

void Agent1::ring11()
{
///<<< BEGIN WRITING YOUR CODE takeoff

ROS_INFO("ring  11");
cmdd=711;

btt=bt;
while(bt==btt)
{}
btt=bt;
///<<< END WRITING YOUR CODE
}

/*-------------------------------------------*/
void Agent1::ring12()
{
///<<< BEGIN WRITING YOUR CODE ring12

ROS_INFO("ring  12");
cmdd=712;

btt=bt;
while(bt==btt)
{}
btt=bt;
///<<< END WRITING YOUR CODE
}
/*-------------------------------------------*/

void Agent1::ring13()
{
///<<< BEGIN WRITING YOUR CODE ring13
ROS_INFO("ring  13");
cmdd=713;

btt=bt;
while(bt==btt)
{}
btt=bt;
///<<< END WRITING YOUR CODE
}

void Agent1::ring14()
{
///<<< BEGIN WRITING YOUR CODE ring14
ROS_INFO("ring  14");
cmdd=714;

btt=bt;
while(bt==btt)
{}
btt=bt;
///<<< END WRITING YOUR CODE
}

void Agent1::ring8()
{
///<<< BEGIN WRITING YOUR CODE ring8
ROS_INFO("ring  8");
cmdd=788;

btt=bt;
while(bt==btt)
{}
btt=bt;
///<<< END WRITING YOUR CODE
}

void Agent1::ring9()
{
///<<< BEGIN WRITING YOUR CODE ring9
ROS_INFO("ring  9");
cmdd=78;

btt=bt;
while(bt==btt)
{}
btt=bt;
///<<< END WRITING YOUR CODE
}

void Agent1::ring10()
{
///<<< BEGIN WRITING YOUR CODE ring10
ROS_INFO("ring  10");
cmdd=79;

btt=bt;
while(bt==btt)
{}
btt=bt;
///<<< END WRITING YOUR CODE
}

void Agent1::ring3()
{
///<<< BEGIN WRITING YOUR CODE ring3
ROS_INFO("ring  3");
cmdd=4;

btt=bt;
while(bt==btt)
{}
///<<< END WRITING YOUR CODE
}

/*-------------------------------------------*/

///<<< BEGIN WRITING YOUR CODE FILE_UNINIT

///<<< END WRITING YOUR CODE

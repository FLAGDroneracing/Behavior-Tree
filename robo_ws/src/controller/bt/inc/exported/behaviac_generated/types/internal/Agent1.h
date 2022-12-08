﻿// -------------------------------------------------------------------------------
// THIS FILE IS ORIGINALLY GENERATED BY THE DESIGNER.
// YOU ARE ONLY ALLOWED TO MODIFY CODE BETWEEN '///<<< BEGIN' AND '///<<< END'.
// PLEASE MODIFY AND REGENERETE IT IN THE DESIGNER FOR CLASS/MEMBERS/METHODS, ETC.
// -------------------------------------------------------------------------------

#ifndef _BEHAVIAC_AGENT1_H_
#define _BEHAVIAC_AGENT1_H_

// ---------------------------------swarm----------------------------------------------
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Point.h>
#include <mavros_msgs/CommandBool.h>
#include <mavros_msgs/SetMode.h>
#include <mavros_msgs/State.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <thread>
#include <cmath>
#include "tf/transform_datatypes.h"//转换函数头文件
// ---------------------------------swarm----------------------------------------------

#include "behaviac_headers.h"
#include <ros/ros.h>
#include <fsm/command_acc.h>
//#include <fsm/single_offboard.h>

///<<< BEGIN WRITING YOUR CODE FILE_INIT

///<<< END WRITING YOUR CODE

class Agent1 : public behaviac::Agent
///<<< BEGIN WRITING YOUR CODE Agent1
///<<< END WRITING YOUR CODE
{
public:
	Agent1();
	// Agent1(ros::NodeHandle N);
	virtual ~Agent1();

	BEHAVIAC_DECLARE_AGENTTYPE(Agent1, behaviac::Agent)

    ros::NodeHandle NH;

	// public:	void CmddPuber();

	// public: void UdpServer(const char* ip,const uint16_t cport,const int UAVID);

	public: void ring1();

	public: void ring10();

	public: void ring11();

	public: void ring12();

	public: void ring13();

	public: void ring14();

	public: void ring15();

	public: void ring2();

	public: void ring3();

	public: void ring8();

	public: void ring9();

	public: void takeoff();

    public: ros::Rate rate() ;
///<<< BEGIN WRITING YOUR CODE CLASS_PART

///<<< END WRITING YOUR CODE
};

///<<< BEGIN WRITING YOUR CODE FILE_UNINIT

///<<< END WRITING YOUR CODE

#endif
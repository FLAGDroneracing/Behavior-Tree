# Behavior-Tree
# 教程
1、登录behaviac官网https://www.behaviac.com/ ，下载相关软件（Windows版），并根据相关教程设计行为树的基本框架，并生成相应的代码包  
2、把代码包当作功能包，拷入自定义的工作空间中，进行编译，cmakelist文件可参考示例代码  
3、示例代码中，行为树代码通过udp协议与single_offboard.cpp对接  
4、在工作空间内运行相应的bt.sh即可启动行为树
#布置方法
参考bt.cpp与single_offboard.cpp的通信协议，前者配置了行为树决策逻辑，后者配置了px4的接口
#效果图
同时启动两节点后，效果图如下

# 附件
上传的工作空间包含了robomaster比赛中的行为树功能包bt

cmake_minimum_required(VERSION 2.8.3)
project(grid_path_searcher)

find_package(catkin REQUIRED COMPONENTS 
    roscpp 
    std_msgs
    nav_msgs
    visualization_msgs 
    tf
)

find_package(Eigen3 REQUIRED)
find_package(PCL REQUIRED)

set(Eigen3_INCLUDE_DIRS ${EIGEN3_INCLUDE_DIR})

catkin_package(
  INCLUDE_DIRS include
CATKIN_DEPENDS roscpp std_msgs tf
)

include_directories(
    include 
    SYSTEM 
    third_party
    ${catkin_INCLUDE_DIRS} 
    ${Eigen3_INCLUDE_DIRS} 
    ${PCL_INCLUDE_DIRS}
)

set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS} -O3 -Wall") # -Wextra -Werror

#add_executable( demo_node 
 #   src/demo_node.cpp
  #  src/Astar_searcher.cpp
   # src/read_only/JPS_utils.cpp
    #src/read_only/JPS_searcher.cpp
     #)

#target_link_libraries(demo_node 
    #${catkin_LIBRARIES}
   # ${PCL_LIBRARIES} 
#)
#add_executable ( random_complex 
 #   src/random_complex_generator.cpp )

#target_link_libraries( random_complex
 #   ${catkin_LIBRARIES}
  #  ${PCL_LIBRARIES} )  

add_executable ( astar_node 
    src/astar_node.cpp 
    src/Astar_searcher_2d.cpp
    )
target_link_libraries(astar_node
    ${catkin_LIBRARIES}
    ${PCL_LIBRARIES} )

add_executable ( astar_node_3d
    src/astar_node_3d.cpp 
    src/Astar_searcher_3d.cpp
    )
target_link_libraries(astar_node_3d
    ${catkin_LIBRARIES}
    ${PCL_LIBRARIES} )

add_executable ( astar_node_cent
    src/astar_node_cent.cpp 
    src/Astar_searcher_2d.cpp
    )
target_link_libraries(astar_node_cent
    ${catkin_LIBRARIES}
    ${PCL_LIBRARIES} )

add_executable ( astar_node_3d_mt
    src/astar_node_3d_mt.cpp 
    src/Astar_searcher_3d.cpp
    )
target_link_libraries(astar_node_3d_mt
    ${catkin_LIBRARIES}
    ${PCL_LIBRARIES} )

add_executable ( test 
    src/test.cpp 
    )
target_link_libraries(test
    ${catkin_LIBRARIES}
    ${PCL_LIBRARIES} )


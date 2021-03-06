//@Project : DINK-Open Practical Autonomous Driving Framework.
//@Author  : SeriousHAO
//@Time    : 1/27/19 5:07 AM


#include <ros/ros.h>
#include "euclidean_cluster/cluster.h"

int main(int argc, char** argv)
{
	ros::init(argc, argv, "test_euclidean_cluster");
	std::cout << "test euclidean cluster" << std::endl;

	euclidean_cluster::Cluster<pcl::PointNormal> clusters;
	// euclidean_cluster::Cluster<pcl::PointXYZ> clusters;

	ros::spin();

	return 0;
}


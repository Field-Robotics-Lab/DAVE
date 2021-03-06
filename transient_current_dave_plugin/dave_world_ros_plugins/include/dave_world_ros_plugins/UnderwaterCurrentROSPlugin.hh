// Copyright (c) 2016 The dave Simulator Authors.
// All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/// \file UnderwaterCurrentROSPlugin.hh
/// \brief Publishes the ocean current velocity in ROS messages and creates a
/// service to alter the flow model in runtime

#ifndef __UNDERWATER_CURRENT_ROS_PLUGIN_HH__
#define __UNDERWATER_CURRENT_ROS_PLUGIN_HH__

#include <dave_world_ros_plugins_msgs/SetCurrentModel.h>
#include <dave_world_ros_plugins_msgs/GetCurrentModel.h>
#include <dave_world_ros_plugins_msgs/SetCurrentVelocity.h>
#include <dave_world_ros_plugins_msgs/SetCurrentDirection.h>
#include <dave_world_ros_plugins_msgs/SetOriginSphericalCoord.h>
#include <dave_world_ros_plugins_msgs/GetOriginSphericalCoord.h>
#include <dave_world_ros_plugins_msgs/StratifiedCurrentVelocity.h>
#include <ros/ros.h>
#include <ros/package.h>
#include <geometry_msgs/TwistStamped.h>
#include <geometry_msgs/Vector3.h>
#include <boost/scoped_ptr.hpp>
#include <gazebo/common/Plugin.hh>
#include <gazebo/physics/World.hh>

#include <map>
#include <string>

// Gazebo plugin
#include <dave_world_plugins/UnderwaterCurrentPlugin.hh>

namespace dave_simulator_ros
{
  class UnderwaterCurrentROSPlugin : public gazebo::UnderwaterCurrentPlugin
  {
    /// \brief Class constructor
    public: UnderwaterCurrentROSPlugin();

    /// \brief Class destructor
    public: virtual ~UnderwaterCurrentROSPlugin();

    /// \brief Load module and read parameters from SDF.
    public: void Load(gazebo::physics::WorldPtr _world,
        sdf::ElementPtr _sdf);

    /// \brief Service call to update the parameters for the velocity
    /// Gauss-Markov process model
    public: bool UpdateCurrentVelocityModel(
        dave_world_ros_plugins_msgs::SetCurrentModel::Request& _req,
        dave_world_ros_plugins_msgs::SetCurrentModel::Response& _res);

    /// \brief Service call to update the parameters for the horizontal angle
    /// Gauss-Markov process model
    public: bool UpdateCurrentHorzAngleModel(
        dave_world_ros_plugins_msgs::SetCurrentModel::Request& _req,
        dave_world_ros_plugins_msgs::SetCurrentModel::Response& _res);

    /// \brief Service call to update the parameters for the vertical angle
    /// Gauss-Markov process model
    public: bool UpdateCurrentVertAngleModel(
        dave_world_ros_plugins_msgs::SetCurrentModel::Request& _req,
        dave_world_ros_plugins_msgs::SetCurrentModel::Response& _res);

    /// \brief Service call to read the parameters for the velocity
    /// Gauss-Markov process model
    public: bool GetCurrentVelocityModel(
        dave_world_ros_plugins_msgs::GetCurrentModel::Request& _req,
        dave_world_ros_plugins_msgs::GetCurrentModel::Response& _res);

    /// \brief Service call to read the parameters for the horizontal angle
    /// Gauss-Markov process model
    public: bool GetCurrentHorzAngleModel(
        dave_world_ros_plugins_msgs::GetCurrentModel::Request& _req,
        dave_world_ros_plugins_msgs::GetCurrentModel::Response& _res);

    /// \brief Service call to read the parameters for the vertical angle
    /// Gauss-Markov process model
    public: bool GetCurrentVertAngleModel(
        dave_world_ros_plugins_msgs::GetCurrentModel::Request& _req,
        dave_world_ros_plugins_msgs::GetCurrentModel::Response& _res);

    /// \brief Service call to update the mean value of the flow velocity
    public: bool UpdateCurrentVelocity(
        dave_world_ros_plugins_msgs::SetCurrentVelocity::Request& _req,
        dave_world_ros_plugins_msgs::SetCurrentVelocity::Response& _res);

    /// \brief Service call to update the mean value of the horizontal angle
    public: bool UpdateHorzAngle(
        dave_world_ros_plugins_msgs::SetCurrentDirection::Request& _req,
        dave_world_ros_plugins_msgs::SetCurrentDirection::Response& _res);

    /// \brief Service call to update the mean value of the vertical angle
    public: bool UpdateVertAngle(
        dave_world_ros_plugins_msgs::SetCurrentDirection::Request& _req,
        dave_world_ros_plugins_msgs::SetCurrentDirection::Response& _res);

    /// \brief Publishes ROS topics
    private: void OnUpdateCurrentVel();

    /// \brief All underwater world services
    private: std::map<std::string, ros::ServiceServer> worldServices;

    /// \brief Pointer to this ROS node's handle.
    private: boost::scoped_ptr<ros::NodeHandle> rosNode;

    /// \brief Connection for callbacks on update world.
    private: gazebo::event::ConnectionPtr rosPublishConnection;

    /// \brief Publisher for the flow velocity in the world frame
    private: ros::Publisher flowVelocityPub;

    /// \brief Publisher for the stratified current in the world frame
    private: ros::Publisher stratifiedCurrentVelocityPub;

    /// \brief Period after which we should publish a message via ROS.
    private: gazebo::common::Time rosPublishPeriod;

    /// \brief Last time we published a message via ROS.
    private: gazebo::common::Time lastRosPublishTime;
  };
}

#endif  // __UNDERWATER_CURRENT_ROS_PLUGIN_HH__

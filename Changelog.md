# Changelog

This changelog covers the entire dave project which includes a few repositories, not just the current [dave](https://github.com/Field-Robotics-Lab/dave) repo.


## [1.0.0] - 2020-06-08

### Added

- Visual models of
  - Forward looking sonar: [nps_uw_sensors_gazebo PR#3](https://github.com/Field-Robotics-Lab/nps_uw_sensors_gazebo/pull/3)
  - Doppler velocity logs: [nps_uw_sensors_gazebo PR#6](https://github.com/Field-Robotics-Lab/nps_uw_sensors_gazebo/pull/6)
  - Lidar: [nps_uw_sensor_gazebo PR#4](https://github.com/Field-Robotics-Lab/nps_uw_sensors_gazebo/pull/4)
  - ROV: [dave PR#17](https://github.com/Field-Robotics-Lab/dave/pull/17)
- Manipulation, force feedback based on joint forces and torques:  [dave PR#16](https://github.com/Field-Robotics-Lab/dave/pull/16)
- Sensor functionality
  - Sonar, prototype single-beam sonar plugin to simulate beam pattern and sonar equations: nps_uw_sensors_gazebo PR's [#1]([nps_uw_sensors_gazebo PR#6](https://github.com/Field-Robotics-Lab/nps_uw_sensors_gazebo/pull/1) and [#5]([nps_uw_sensors_gazebo PR#6](https://github.com/Field-Robotics-Lab/nps_uw_sensors_gazebo/pull/5)
  - Lidar, configuring existing plugin for underwater application and addition of pan/tilt functionality: [nps_uw_sensors_gazebo PR #4]([nps_uw_sensors_gazebo PR#6](https://github.com/Field-Robotics-Lab/nps_uw_sensors_gazebo/pull/4)
  - DVL, water track and beam velocity additions: [ds_sim PR#3](https://bitbucket.org/whoidsl/ds_sim/pull-requests/3)
- Documentation, descriptions and tutorials
  - Demonstrations and tutorials described on [dave wiki page](https://github.com/Field-Robotics-Lab/dave/wiki)
  - [Evaluation of current DVL plugins ](https://github.com/Field-Robotics-Lab/dave/wiki/dvl_description)
  - [Evaluation of current forward-looking/multibeam sonar plugins](https://github.com/Field-Robotics-Lab/dave/wiki/dvl_description)

## [2.0.0] - 2020-09-25

### Added

- Visual models of
  - New vehicles (Smilodon, Caracara and Caldus): [dave PR #54](https://github.com/Field-Robotics-Lab/dave/pull/54), [#62](https://github.com/Field-Robotics-Lab/dave/pull/62) and [#67](https://github.com/Field-Robotics-Lab/dave/pull/67) 
  - Three Glider Models: [dave PR #31](https://github.com/Field-Robotics-Lab/dave/pull/31)
  - Predator Manipulator: [dave PR #26](https://github.com/Field-Robotics-Lab/dave/pull/26)
- Sensor Functionality
  - USBL dev [dave PR #50](https://github.com/Field-Robotics-Lab/dave/pull/50) and [#60](https://github.com/Field-Robotics-Lab/dave/pull/60) 
  - Prototype of Depth camera sonar [nps_uw_sensors_gazebo PR #13](https://github.com/Field-Robotics-Lab/nps_uw_sensors_gazebo/pull/13)
  - DVL upgrade to include current profiling [nps_uw_sensors_gazebo PR #15](https://github.com/Field-Robotics-Lab/nps_uw_sensors_gazebo/pull/15)
  - Improved underwater lidar model, standalone and mounted to vehicle [dave PR #66](https://github.com/Field-Robotics-Lab/dave/pull/66) and [nps_uw_sensors_gazebo PR #17](https://github.com/Field-Robotics-Lab/nps_uw_sensors_gazebo/pull/17) 
- Environmental Plugins
  - Bathymetry: generate DEM models directly from mapping data [dave PR 44](https://github.com/Field-Robotics-Lab/dave/pull/44).
  - Occluded objects on seafloor [dave PR 43](https://github.com/Field-Robotics-Lab/dave/pull/43)
- Manipulation: Electrical mating plugin enhancement [dave PR #40](https://github.com/Field-Robotics-Lab/dave/pull/40)
- Documentation, descriptions and tutorials
  - Additional demonstrations and tutorials described on [dave wiki page](https://github.com/Field-Robotics-Lab/dave/wiki)
  - [Evaluation of Ocean Current Plugin Capabilities](https://github.com/Field-Robotics-Lab/dave/wiki/Ocean-Current)
- Github Action for Continuous Integration [dave PR #39](https://github.com/Field-Robotics-Lab/dave/pull/39) and [nps_uw_sensors_gazebo PR 16](https://github.com/Field-Robotics-Lab/nps_uw_sensors_gazebo/pull/16)

## [3.0.0] - 2020-12-17

### Added
- Sensor Functionality
  - Ray-based Multibeam Sonar: [nps_uw_sensors_gazebo PR #25](https://github.com/Field-Robotics-Lab/nps_uw_sensors_gazebo/pull/25)
- Documentation, descriptions and tutorials
  - [Multibeam Forward Looking Sonar](https://github.com/Field-Robotics-Lab/dave/wiki/Multibeam-Forward-Looking-Sonar)
  - [Visualize Seabed Gradient with DVL](https://github.com/Field-Robotics-Lab/dave/wiki/DVL-Seabed-Gradient)
- Environmental Plugins
  - Stratified Ocean Current: [dave PR #76](https://github.com/Field-Robotics-Lab/dave/pull/76)
  
### Update
- Environmental Plugins
- Documentation, descriptions and tutorials
  - [Ocean current plugin](https://github.com/Field-Robotics-Lab/dave/wiki/Ocean-Current)

## [3.1.0] - 2021-1-22
  
### Update
- Ray-based Multibeam Sonar is moved to separate repository
  - Ray-based Multibeam Sonar: [nps_uw_multibeam_sonar](https://github.com/Field-Robotics-Lab/nps_uw_multibeam_sonar)
- Docker base image : Nvidia/cuda instead of Nvidia/opengl : [dave PR #89](https://github.com/Field-Robotics-Lab/dave/pull/89)
- Documentation, descriptions and tutorials
  - [Multibeam Forward Looking Sonar](https://github.com/Field-Robotics-Lab/dave/wiki/Multibeam-Forward-Looking-Sonar)
  - [Clone source repositories](https://github.com/Field-Robotics-Lab/dave/wiki/Clone-Dave-Repositories)

## [3.1.1] - 2021-03-23

### Added

### Update
- Moved docker, docs, repos, and tutorial_pictures directories to a new extras directory to consolidate all of the non-ROS portions of the repository into a single subdirectory

# Start with ROS base image
FROM ros:noetic-ros-base

# Tools useful during development.
RUN apt update \
 && apt install -y --no-install-recommends\
        cppcheck \
        curl \
        cmake \
        lsb-release \
        gdb \
        git \
	libeigen3-dev \
	pkg-config \
        protobuf-compiler \
        python3-dbg \
        python3-pip \
        python3-venv \
        ruby \
        software-properties-common \
        sudo \
	wget \		
 && apt clean

# Set distributions
ARG DIST=noetic
ARG GAZ=gazebo11

# setup sources.list
# ROS
RUN echo "deb http://packages.ros.org/ros/ubuntu focal main" > /etc/apt/sources.list.d/ros1-latest.list
# Gazebo
RUN . /etc/os-release \
    && echo "deb http://packages.osrfoundation.org/gazebo/$ID-stable `lsb_release -sc` main" > /etc/apt/sources.list.d/gazebo-latest.list


# setup keys
# ROS
RUN apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654
# Gazebo
RUN apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys D2486D2DD83DB69272AFE98867170598AF249743

# setup environment
ENV LANG C.UTF-8
ENV LC_ALL C.UTF-8

RUN apt-get update && apt-get install -y --no-install-recommends \
    qtbase5-dev \
    libgles2-mesa-dev \
    ${GAZ} \
    lib${GAZ}-dev \
    python3-catkin-tools \
    python3-rosdep \
    python3-rosinstall \
    python3-rosinstall-generator \
    python3-wstool \
    ros-${DIST}-xacro \
    ros-${DIST}-gazebo-ros \
    ros-${DIST}-gazebo-ros-control \
    ros-${DIST}-gazebo-ros-pkgs\		
    ros-${DIST}-gazebo-plugins \
    ros-${DIST}-hector-gazebo-plugins \
    ros-${DIST}-joint-state-publisher \
    ros-${DIST}-joint-state-controller \
    ros-${DIST}-position-controllers \
    ros-${DIST}-effort-controllers \		
    ros-${DIST}-joy \
    ros-${DIST}-joy-teleop \
    ros-${DIST}-key-teleop \
    ros-${DIST}-robot-state-publisher \
    ros-${DIST}-rviz \
    ros-${DIST}-teleop-tools \
    ros-${DIST}-teleop-twist-keyboard \
    ros-${DIST}-tf2-geometry-msgs \
    ros-${DIST}-tf2-tools \
    ros-${DIST}-rqt \
    ros-${DIST}-rqt-common-plugins \
    ros-${DIST}-geographic-msgs \
    && rm -rf /var/lib/apt/lists/*

# Any Dave specific dependencies go here...

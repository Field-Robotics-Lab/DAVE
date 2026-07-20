cmake_minimum_required(VERSION 3.8)
project(dave_worlds)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)

install(DIRECTORY media worlds
        DESTINATION share/${PROJECT_NAME}
        PATTERN "*~" EXCLUDE)

ament_package()

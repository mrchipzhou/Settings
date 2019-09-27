cmake_minimum_required(VERSION 3.0.0)
project(GLFWTemplate VERSION 0.1.0)

FIND_PACKAGE(OpenGL REQUIRED)
INCLUDE_DIRECTORIES(${OPENGL_INCLUDE_DIR})
 
 
set(CMAKE_CXX_STANDARD 14)
# 添加头文件
set(GLEW_H /usr/local/Cellar/glew/2.1.0/include/GL)
set(GLFW_H /usr/local/Cellar/glfw/3.2.1/include/GLFW)
set(GLAD_H glad/include)
include_directories(${GLEW_H} ${GLFW_H} ${GLAD_H})

# 添加目标链接
set(GLEW_LINK /usr/local/Cellar/glew/2.1.0/lib/libGLEW.2.1.dylib)
set(GLFW_LINK /usr/local/Cellar/glfw/3.2.1/lib/libglfw.3.dylib)
 

add_executable(GLFWTemplate main.cpp)
target_link_libraries(GLFWTemplate ${OPENGL} ${GLFW_LINK} ${GLEW_LINK})

if (APPLE)
target_link_libraries(GLFWTemplate "-framework OpenGL")
target_link_libraries(GLFWTemplate "-framework GLUT")
endif()




cmake_minimum_required(VERSION 3.0)

project(Test)

include(CTest)

add_executable(main main.cc)

add_test(NAME main COMMAND main)

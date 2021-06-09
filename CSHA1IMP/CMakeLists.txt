cmake_minimum_required(VERSION 3.17)
project(CSHA1IMP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(CSHA1)

add_executable(CSHA1IMP
        CSHA1/SHA1.cpp
        CSHA1/SHA1.h
        Main.cpp
        Main.h CSHA1/SHA1Transmitter.cpp CSHA1/SHA1Transmitter.h CSHA1/SHA1Receiver.cpp CSHA1/SHA1Receiver.h)

cmake_minimum_required(VERSION 3.17)
project(CSHA1IMP)

set(CMAKE_CXX_STANDARD 14)

include_directories(CSHA1IMP)
include_directories(CSHA1IMP/CSHA1)

add_executable(CSHA1IMP
        CSHA1IMP/CSHA1/SHA1.cpp
        CSHA1IMP/CSHA1/SHA1.h
        Main.cpp
        CSHA1IMP/CSHA1/SHA1Transmitter.cpp CSHA1IMP/CSHA1/SHA1Transmitter.h CSHA1IMP/CSHA1/SHA1Receiver.cpp CSHA1IMP/CSHA1/SHA1Receiver.h MD5/MD5Receiver.cpp MD5/MD5Receiver.h MD5/MD5Transmitter.cpp MD5/MD5Receiver.h)

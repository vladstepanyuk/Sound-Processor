cmake_minimum_required(VERSION 3.22)
project(Sound_Processor)

set(CMAKE_CXX_STANDARD 14)

#include_directories(.)

FIND_PACKAGE(Boost 1.74.0 COMPONENTS program_options REQUIRED)
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})


add_executable(Sound_Processor Converter.cpp Factory.cpp ProgramContext.cpp SoundProcessor.cpp WaveHeadParser.cpp Printer.cpp Reader.cpp main.cpp)


TARGET_LINK_LIBRARIES(Sound_Processor LINK_PUBLIC ${Boost_LIBRARIES})



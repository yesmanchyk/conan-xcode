cmake_minimum_required(VERSION 3.15)
project(alpha CXX)



add_executable(alpha src/alpha.cpp src/main.cpp)



install(TARGETS alpha DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )

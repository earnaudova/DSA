cmake_minimum_required(VERSION 3.25)
project(DSA)

set(CMAKE_CXX_STANDARD 17)

add_executable(DSA
        main.cpp
        DynamicProgramming/Memoization/fibonacci.cpp
        DynamicProgramming/Memoization/gridTravel.cpp
        DynamicProgramming/Memoization/canSum.cpp
        DynamicProgramming/Tabulation/fibonacci.cpp
        DynamicProgramming/Memoization/howSum.cpp
        DynamicProgramming/Memoization/bestSum.cpp
        DynamicProgramming/Memoization/canConstruct.cpp
        DynamicProgramming/Memoization/countConstruct.cpp
        DynamicProgramming/Memoization/allConstruct.cpp
        DynamicProgramming/Tabulation/gridTraveler.cpp
        DynamicProgramming/Tabulation/canSum.cpp
        DynamicProgramming/Tabulation/howSum.cpp
        DynamicProgramming/Tabulation/bestSum.cpp
        DynamicProgramming/Tabulation/canPartition.cpp
)

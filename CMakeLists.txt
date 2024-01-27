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
        DynamicProgramming/Tabulation/coinChange.cpp
        DynamicProgramming/Memoization/coinChange.cpp
        DynamicProgramming/Memoization/minStickers.cpp
        DynamicProgramming/Tabulation/canConstruct.cpp
        DynamicProgramming/Tabulation/countConstruct.cpp
        DynamicProgramming/Tabulation/allConstruct.cpp
        SearchingAndSorting/AStarSearch/astarsearch.cpp
        SearchingAndSorting/AStarSearch/test.cpp
        SearchingAndSorting/AStarSearch/testing.cpp
        Graph/dfs.cpp
        Graph/bfs.cpp
        Graph/hasPath.cpp
        Graph/undirectedPath.cpp
        Graph/connectedComponentsCount.cpp
        Graph/largestComponent.cpp
)

cmake_minimum_required(VERSION 3.25)
project(graph_puzzle_game)

set(CMAKE_CXX_STANDARD 17)

add_executable(graph_puzzle_game
        main.cpp
        FileReader.cpp FileReader.h
        Graph.cpp Graph.h
        Edge.cpp  Edge.h
        EdgeList.cpp EdgeList.h
        AbstractGraph.cpp AbstractGraph.h
        Path.cpp Path.h)

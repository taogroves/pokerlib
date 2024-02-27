cmake_minimum_required(VERSION 3.28)
project(PokerLib)

set(CMAKE_CXX_STANDARD 26)

add_executable(Test executables/test.cpp
        luts.h
        defs.h
        defs.cpp
)
add_executable(TimeAllHands executables/timeallhands.cpp
        luts.h
        defs.h
        defs.cpp
)
add_executable(Simulator executables/simulator.cpp
        luts.h
        defs.h
        defs.cpp
        simulation/player.cpp
        simulation/player.h
        simulation/game.cpp
        simulation/game.h
)

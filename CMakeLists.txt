cmake_minimum_required(VERSION 3.29)
project(Galaktyka_Clion)

set(CMAKE_CXX_STANDARD 26)

add_executable(Galaktyka_Clion main.cpp
        SpaceShip.cpp
        SpaceShip.h
        Civilization.cpp
        Civilization.h
        Planet.cpp
        Planet.h
        Star.cpp
        Star.h
        Resource.cpp
        Resource.h
        BlackHole.cpp
        BlackHole.h
        AsteroidField.cpp
        AsteroidField.h
        WormHole.cpp
        WormHole.h
        GalacticMarket.cpp
        GalacticMarket.h
        Coalition.cpp
        Coalition.h
        Galaxy_Object.cpp
        Galaxy_Object.h
        Vehicle.cpp
        Vehicle.h
        TransportSpaceShip.cpp
        TransportSpaceShip.h
        PeopleCarrier.cpp
        PeopleCarrier.h
        ResourceCarrier.cpp
        ResourceCarrier.h)

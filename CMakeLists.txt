cmake_minimum_required(VERSION 3.17)
project(Space)

set(CMAKE_CXX_STANDARD 20)

add_executable(Space main.cpp Constellations.h Constellations.cpp "AstronomicalPhenomenon .cpp" "AstronomicalPhenomenon .h" Satellite.cpp Satellite.h Planet.cpp Planet.h Star.cpp Star.h Eclipse.cpp Eclipse.h meteorShower.h meteorSower.cpp PlanetEvent.cpp PlanetEvent.h AstronomicalObject.cpp AstronomicalObject.h)
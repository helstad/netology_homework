cmake_minimum_required(VERSION 3.26)
project(fantasy_race)

set(CMAKE_CXX_STANDARD 20)

set(source_dll RaceDLL/Entities/Entity.cpp
        RaceDLL/Entities/Entity.h
        RaceDLL/Entities/GroundEntities/GroundEntity.cpp
        RaceDLL/Entities/GroundEntities/GroundEntity.h
        RaceDLL/Entities/AirEntities/AirEntity.cpp
        RaceDLL/Entities/AirEntities/AirEntity.h
        RaceDLL/Entities/GroundEntities/Camel.cpp
        RaceDLL/Entities/GroundEntities/Camel.h
        RaceDLL/Entities/GroundEntities/FastCamel.cpp
        RaceDLL/Entities/GroundEntities/FastCamel.h
        RaceDLL/Entities/GroundEntities/Centaur.cpp
        RaceDLL/Entities/GroundEntities/Centaur.h
        RaceDLL/Entities/GroundEntities/BootsTerrain.cpp
        RaceDLL/Entities/GroundEntities/BootsTerrain.h
        RaceDLL/Entities/EntitiesList.h
        RaceDLL/Entities/AirEntities/MagicCarpet.cpp
        RaceDLL/Entities/AirEntities/MagicCarpet.h
        RaceDLL/Entities/AirEntities/Eagle.cpp
        RaceDLL/Entities/AirEntities/Eagle.h
        RaceDLL/Entities/Track.cpp
        RaceDLL/Entities/Track.h
        RaceDLL/Core/ParticipantRegistry.cpp
        RaceDLL/Core/ParticipantRegistry.h
        RaceDLL/GameManager.cpp
        RaceDLL/GameManager.h
        RaceDLL/Entities/AirEntities/Broomstick.cpp
        RaceDLL/Entities/AirEntities/Broomstick.h
        RaceDLL/Core/RaceCalculation.cpp
        RaceDLL/Core/RaceCalculation.h
        RaceDLL/ExportImport.h
)

add_library(_race SHARED ${source_dll})

add_executable(fantasy_race main.cpp
        UserInterface.cpp
        UserInterface.h
)

target_link_libraries(fantasy_race _race)
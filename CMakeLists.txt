cmake_minimum_required(VERSION 3.14)
project(OriginalDesignGame)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(GameEngineLib
    EventManager.cpp
    Game.cpp
    GameElement.cpp
    GameObject.cpp
    GameObjectRepository.cpp
    Scene.cpp
    Character.cpp
    Phonebook.cpp
)


add_executable(PlayGame main.cpp ConsoleUI.cpp)
target_link_libraries(PlayGame PRIVATE GameEngineLib)


add_executable(RunTests InteractWithObjectTests.cpp)
target_link_libraries(RunTests PRIVATE GameEngineLib)
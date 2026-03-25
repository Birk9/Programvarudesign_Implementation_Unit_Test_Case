#include "GameObjectRepository.h"

GameObjectRepository::GameObjectRepository() {}
GameObjectRepository::~GameObjectRepository() {}

void GameObjectRepository::addGameObject(std::string name, GameObject* obj) {
    objects[name] = obj; 
}

GameObject* GameObjectRepository::getGameObject(std::string gameElementName) {
    if (objects.find(gameElementName) != objects.end()) {
        return objects[gameElementName];
    }
    return nullptr; 
}
#include "Scene.h"

Scene::Scene() {}

Scene::~Scene() {}

std::vector<std::string> Scene::listAvailableElements() {
    return std::vector<std::string>(); 
}

bool Scene::isAvailable(std::string gameElementName) {
    return true; 
}

bool Scene::isGameObject(std::string gameElementName) {
    return false;
}
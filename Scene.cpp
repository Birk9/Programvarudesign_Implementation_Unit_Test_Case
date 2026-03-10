#include "Scene.h"

Scene::Scene() {}

Scene::~Scene() {}

std::vector<std::string> Scene::listAvailableElements() {
    return std::vector<std::string>(); // Returnerar en tom lista för nu
}

bool Scene::isAvailable(std::string gameElementName) {
    return false;
}

bool Scene::isGameObject(std::string gameElementName) {
    return false;
}
#pragma once
#include <string>
#include <map>
#include "GameObject.h"

class GameObjectRepository
{
public:
	GameObjectRepository();
	~GameObjectRepository();
    
    void addGameObject(std::string name, GameObject* obj);
	GameObject* getGameObject(std::string gameElementName);

private:
    std::map<std::string, GameObject*> objects;
};
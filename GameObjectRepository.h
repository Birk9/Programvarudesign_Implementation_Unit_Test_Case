#pragma once
#include <string>
#include "GameObject.h"

class GameObjectRepository
{
public:
	GameObjectRepository();
	~GameObjectRepository();
	GameObject* getGameObject(std::string gameElementName);

private:

};
#pragma once
#include <string>
#include "GameObjectRepository.h"
#include "Scene.h"
#include "GameObject.h"

class Game
{
public:
	Game();
	~Game();
	void selectGameObject(std::string name);
	void selectInteraction(GameObject* theGameObject, std::string theInteraction);
	void setInteractionOptions(std::string theOptions);
	void startInteraction();
	void abortInteraction();

private:
	GameObjectRepository myGameObjects;
	Scene currentScene;
	Scene playerInventory;
};
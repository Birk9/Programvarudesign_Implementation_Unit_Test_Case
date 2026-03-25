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
    
    // Ändrat från void till bool!
	bool selectGameObject(std::string name);
	bool selectInteraction(GameObject* theGameObject, std::string theInteraction);
	bool setInteractionOptions(std::string theOptions);
    
	void startInteraction();
	void abortInteraction();

private:
	GameObjectRepository myGameObjects;
	Scene currentScene;
	Scene playerInventory;
};
#pragma once
#include <string>

class Game
{
public:
	Game();
	~Game();
	selectGameObject(std::string name);
	selectInteraction(GameObject theGameObject, std::string theInteraction);
	setInteractionOptions(std::string theOptions);
	startInteraction();
	abortInteraction();

private:
	GameObjectRepository myGameObjects;
	Scene currentScene;
	Scene playerInventory;
};

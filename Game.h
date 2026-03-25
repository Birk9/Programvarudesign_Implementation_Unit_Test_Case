#pragma once
#include <string>
#include "GameObjectRepository.h"
#include "CharacterRepository.h"
#include "Scene.h"
#include "GameObject.h"
#include "Character.h"           

class Game
{
public:
	Game();
	~Game();
    
	bool selectGameObject(std::string name);
	bool selectInteraction(GameObject* theGameObject, std::string theInteraction);
	

    bool selectCharacter(std::string name);
    bool selectInteraction(Character* theCharacter, std::string theInteraction);

    bool setInteractionOptions(std::string theOptions);
	void startInteraction();
	void abortInteraction();

private:
	GameObjectRepository myGameObjects;
    CharacterRepository myCharacters;
	Scene currentScene;
	Scene playerInventory;
};
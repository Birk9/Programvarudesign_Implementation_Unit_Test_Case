#include "Game.h"
#include <iostream>

Game::Game() {
    myGameObjects.addGameObject("TestLamp", new GameObject());
    myGameObjects.addGameObject("Lamp", new GameObject()); 
    myCharacters.addCharacter("Guard", new Character()); 
}

Game::~Game() {}

bool Game::selectGameObject(std::string name) {
    GameObject* obj = myGameObjects.getGameObject(name);
    return (obj != nullptr);
}


bool Game::selectCharacter(std::string name) {

    if (currentScene.isAvailable(name)) {
 
        Character* character = myCharacters.getCharacter(name);
        if (character != nullptr) {
            return true;
        }
    }
    return false;
}

bool Game::selectInteraction(GameObject* theGameObject, std::string theInteraction) {
    if (theGameObject != nullptr) {
        if (theInteraction == "TurnOn") return true;
    }
    return false;
}


bool Game::selectInteraction(Character* theCharacter, std::string theInteraction) {
    if (theCharacter != nullptr) {
        std::vector<std::string> interactions = theCharacter->listInteractionTypes();
        
        for (std::string validInteraction : interactions) {
            if (validInteraction == theInteraction) {
                return true; 
            }
        }
    }
    return false; 
}

bool Game::setInteractionOptions(std::string theOptions) { return true; }
void Game::startInteraction() { std::cout << "[System] Interaction completed!\n"; }
void Game::abortInteraction() { std::cout << "[System] Interaction aborted.\n"; }
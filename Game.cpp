#include "Game.h"
#include <iostream>

Game::Game() {

    // Alla objekt skapas
    myGameObjects.addGameObject("TestLamp", new GameObject());
    myGameObjects.addGameObject("Lamp", new GameObject()); 
    myPhonebook.addCharacter("Guard", new Character()); 
}

Game::~Game() {}

bool Game::selectGameObject(std::string name) {
    GameObject* obj = myGameObjects.getGameObject(name);
    return (obj != nullptr);
}


bool Game::selectCharacter(std::string name) {

    //Kollar om saken/karakt�ren finns
    if (currentScene.isAvailable(name)) {
 
        Character* character = myPhonebook.getCharacter(name);
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
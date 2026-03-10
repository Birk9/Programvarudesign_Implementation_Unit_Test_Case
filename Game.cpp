#include "Game.h"
#include <iostream>

Game::Game() {}

Game::~Game() {}

void Game::selectGameObject(std::string name) {
    std::cout << "Game: Väljer objektet '" << name << "'.\n";
}

void Game::selectInteraction(GameObject* theGameObject, std::string theInteraction) {
    if (theGameObject != nullptr) {
        std::cout << "Game: Väljer interaktion '" << theInteraction << "' för objektet.\n";
    }
}

void Game::setInteractionOptions(std::string theOptions) {
    std::cout << "Game: Sätter options '" << theOptions << "'.\n";
}

void Game::startInteraction() {
    std::cout << "Game: Startar interaktionen.\n";
}

void Game::abortInteraction() {
    std::cout << "Game: Avbryter interaktionen.\n";
}
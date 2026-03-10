#include "GameObject.h"
#include <iostream>

std::vector<std::string> GameObject::listInteractionTypes() {
    return std::vector<std::string>(); 
}

void GameObject::startInteraction(std::string theInteractionType) {
    std::cout << "GameObject: Förbereder interaktionen '" << theInteractionType << "'...\n";
}

std::vector<std::string> GameObject::listCurrentInteractionOptions() {
    return std::vector<std::string>();
}

void GameObject::setCurrentInteractionOptions(std::string theOptions) {
    std::cout << "GameObject: Sätter alternativ till '" << theOptions << "'.\n";
}

void GameObject::startCurrentInteraction() {
    std::cout << "GameObject: Startar den valda interaktionen!\n";
}

void GameObject::abortCurrentInteraction() {
    std::cout << "GameObject: Avbryter interaktionen.\n";
}
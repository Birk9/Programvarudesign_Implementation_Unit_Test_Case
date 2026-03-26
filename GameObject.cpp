#include "GameObject.h"
#include <iostream>

std::vector<std::string> GameObject::listInteractionTypes() {
    return std::vector<std::string>(); 
}

void GameObject::startInteraction(std::string theInteractionType) {
    std::cout << "GameObject: Preparing the interaction '" << theInteractionType << "'...\n";
}

std::vector<std::string> GameObject::listCurrentInteractionOptions() {
    return std::vector<std::string>();
}

void GameObject::setCurrentInteractionOptions(std::string theOptions) {
    std::cout << "GameObject: Adds options to '" << theOptions << "'.\n";
}

void GameObject::startCurrentInteraction() {
    std::cout << "GameObject: Starts the selected interaction. \n";
}

void GameObject::abortCurrentInteraction() {
    std::cout << "GameObject: Cancels the interaction. \n";
}
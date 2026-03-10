#include <iostream>
#include <string>
#include "Game.h"
#include "GameObject.h"

int main() {
    Game myGame;
    std::string targetInput;
    std::string actionInput;

    std::cout << "=================================================\n";
    std::cout << "       WELCOME TO THE TEXT ADVENTURE MVP\n";
    std::cout << "=================================================\n";
    std::cout << "You are currently in the Start Scene.\n";
    std::cout << "Available targets: Flashlight (Object), Bob (Character)\n\n";

    while (true) {
        std::cout << "> What do you want to interact with? (type 'Flashlight', 'Bob', or 'quit'): ";
        std::getline(std::cin, targetInput);

        if (targetInput == "quit") {
            break;
        }

        std::cout << "> What do you want to do with " << targetInput << "? (e.g., 'turn on', 'talk'): ";
        std::getline(std::cin, actionInput);

        std::cout << "\n--- Engine Output ---\n";

        myGame.selectGameObject(targetInput);

        GameObject* dummyObject = nullptr;
        myGame.selectInteraction(dummyObject, actionInput);

        myGame.startInteraction();

        std::cout << "---------------------\n\n";
    }

    std::cout << "Exiting game. Thanks for playing!\n";
    return 0;
}
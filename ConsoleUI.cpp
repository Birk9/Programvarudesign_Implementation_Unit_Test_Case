#include "ConsoleUI.h"
#include "GameObject.h"
#include <iostream>

ConsoleUI::ConsoleUI(Game* gameInstance) : game(gameInstance) {}

void ConsoleUI::run() {
    int choice = 0;
    std::cout << "\n=== WELCOME TO THE GAME ===\n";
    // Fulfills the MVP requirement for a Start Scene
    std::cout << "[System] You are in the Start Scene.\n";

    while (choice != 3) {
        displayMenu();
        std::cin >> choice;

        if (choice == 1) {
            interactWithEntity();
        } else if (choice == 2) {
            // Fulfills the MVP requirement for an Inventory
            std::cout << "\n--- INVENTORY ---\n";
            std::cout << "Your inventory is currently empty.\n";
            std::cout << "-----------------\n";
        }
    }
    std::cout << "Exiting game...\n";
}

void ConsoleUI::displayMenu() {
    std::cout << "\n=== MAIN MENU ===\n";
    std::cout << "1. Interact with something in the room (Object/Character)\n";
    std::cout << "2. Show Inventory\n";
    std::cout << "3. Exit\n";
    std::cout << "Choice: ";
}

void ConsoleUI::interactWithEntity() {
    std::string name, interaction;
    std::cout << "What do you want to interact with? (e.g., Lamp, Guard): ";
    std::cin >> name;

    // Communicates with the Game class (our domain logic)
    if (game->selectGameObject(name)) {
        std::cout << "What do you want to do with " << name << "? (e.g., TurnOn, Talk): ";
        std::cin >> interaction;
        
        // We create a temporary empty object to match the teacher's UML diagram 
        // (selectInteraction requires a GameObject pointer)
        GameObject tempObj; 
        
        if (game->selectInteraction(&tempObj, interaction)) {
            game->startInteraction();
        } else {
            std::cout << "Could not perform the action. Invalid interaction.\n";
        }
    } else {
        std::cout << "There is no '" << name << "' here.\n";
    }
}
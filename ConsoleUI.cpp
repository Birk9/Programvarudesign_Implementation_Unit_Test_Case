#include "ConsoleUI.h"
#include "GameObject.h"
#include "Character.h"
#include <iostream>

ConsoleUI::ConsoleUI(Game* gameInstance) : game(gameInstance) {}

void ConsoleUI::run() {
    // Startscen
    std::string choice = "";
    std::cout << "\n--- WELCOME TO THE GAME ---\n";
    std::cout << "[System] You are in the Start Scene.\n";

    while (choice != "3") { 
        displayMenu();
        std::cin >> choice;

        if (choice == "1") {
            interactWithEntity();
        } else if (choice == "2") {
            std::cout << "\n--- INVENTORY ---\n";
            std::cout << "Your inventory is currently empty.\n";
            std::cout << "-----------------\n";
        } else if (choice != "3") {
            std::cout << "Invalid choice, try again!\n";
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

    // Kollar först om det är ett objekt
    if (game->selectGameObject(name)) {
        std::cout << "What do you want to do with " << name << "? (e.g., TurnOn): ";
        std::cin >> interaction;
        
        GameObject tempObj; 
        if (game->selectInteraction(&tempObj, interaction)) {
            game->startInteraction();
        } else {
            std::cout << "Could not perform the action. Invalid interaction for an object.\n";
        }
    } 
    // Om det inte var ett objekt, kollar vi om det är en karaktär
    else if (game->selectCharacter(name)) {
        std::cout << "What do you want to do with " << name << "? (e.g., Talk): ";
        std::cin >> interaction;
        
        Character tempChar;
        if (game->selectInteraction(&tempChar, interaction)) {
            game->startInteraction();
        } else {
            std::cout << "Could not perform the action. Invalid interaction for a character.\n";
        }
    } 
    //Om det varken är ett objekt eller en karaktär
    else {
        std::cout << "There is no '" << name << "' here.\n";
    }
}
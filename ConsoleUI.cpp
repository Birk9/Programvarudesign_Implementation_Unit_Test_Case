#include "ConsoleUI.h"
#include <iostream>

ConsoleUI::ConsoleUI(Game* gameInstance) : game(gameInstance) {}

void ConsoleUI::run() {
    int choice = 0;
    std::cout << "\n=== VÄLKOMMEN TILL SPELET ===\n";
    std::cout << "[System] Du befinner dig i Start Scene.\n";

    while (choice != 3) {
        displayMenu();
        std::cin >> choice;

        if (choice == 1) {
            interactWithEntity();
        } else if (choice == 2) {
            std::cout << "\n--- INVENTORY ---\n";
            std::cout << "Din väska är tom just nu.\n";
            std::cout << "-----------------\n";
        }
    }
    std::cout << "Avslutar spelet...\n";
}

void ConsoleUI::displayMenu() {
    std::cout << "\n=== HUVUDMENY ===\n";
    std::cout << "1. Interagera med något i rummet (Objekt/Karaktär)\n";
    std::cout << "2. Visa Inventory\n";
    std::cout << "3. Avsluta\n";
    std::cout << "Val: ";
}

void ConsoleUI::interactWithEntity() {
    std::string name, interaction;
    std::cout << "Vad vill du interagera med? (t.ex. Lampa, Vakt): ";
    std::cin >> name;

    if (game->selectGameObject(name)) {
        std::cout << "Vad vill du göra med " << name << "? (t.ex. TurnOn, Talk): ";
        std::cin >> interaction;
        
        GameObject tempObj; 
        if (game->selectInteraction(&tempObj, interaction)) {
            game->startInteraction();
        } else {
            std::cout << "Kunde inte utföra handlingen.\n";
        }
    } else {
        std::cout << "Det finns ingen '" << name << "' här.\n";
    }
}
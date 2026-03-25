#pragma once
#include "Game.h"

class ConsoleUI {
public:
    ConsoleUI(Game* gameInstance);
    void run();

private:
    Game* game;
    void displayMenu();
    void interactWithEntity();
};
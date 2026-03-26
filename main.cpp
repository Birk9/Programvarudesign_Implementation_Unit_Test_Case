#include "Game.h"
#include "ConsoleUI.h"

int main() {
    // Skapar 'Game engine'
    Game myGame;
    
    // Skapar menyn
    ConsoleUI ui(&myGame);
    
    // Startar spel loopen
    ui.run();

    return 0;
}
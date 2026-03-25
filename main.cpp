#include "Game.h"
#include "ConsoleUI.h"

int main() {
    // 1. Create the game engine (which now automatically populates its repository)
    Game myGame;
    
    // 2. Create the menu and grant it access to the game instance
    ConsoleUI ui(&myGame);
    
    // 3. Start the game loop!
    ui.run();

    return 0;
}
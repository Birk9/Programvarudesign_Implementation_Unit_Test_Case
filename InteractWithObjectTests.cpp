#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Game.h"
#include "GameObject.h"
#include "Scene.h"

// ---------------------------------------------------------
// TESTER FÖR: Interact With Object
// ---------------------------------------------------------

TEST_CASE("SelectGameObject - Positive - ObjectExists") {
    // Arrange
    Game game;
    // (I en riktig implementation skulle Game hämta "TestLamp" 
    // från GameObjectRepository här)
    
    // Act
    // Anta att vi har ändrat selectGameObject till att returnera bool!
    bool success = game.selectGameObject("TestLamp"); 
    
    // Assert
    CHECK(success == true); 
}

TEST_CASE("SelectGameObject - Negative - ObjectMissing") {
    Game game;
    
    // Act: Försöker välja ett objekt som inte finns
    bool success = game.selectGameObject("NonExistentSword"); 
    
    // Assert
    CHECK(success == false);
}

TEST_CASE("SelectInteraction - Positive - ValidInteraction") {
    Game game;
    GameObject lamp;
    // lamp.addInteraction("TurnOn"); // Pseudokod för hur ni lägger till den
    
    // Act
    bool success = game.selectInteraction(&lamp, "TurnOn");
    
    // Assert
    CHECK(success == true);
}

TEST_CASE("SelectInteraction - Negative - InvalidInteraction") {
    Game game;
    GameObject lamp;
    
    // Act: Försöker göra något man inte kan göra med en lampa
    bool success = game.selectInteraction(&lamp, "Eat");
    
    // Assert
    CHECK(success == false);
}
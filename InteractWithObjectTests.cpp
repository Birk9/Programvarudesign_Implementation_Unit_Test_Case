#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Game.h"
#include "GameObject.h"
#include "Character.h"

TEST_CASE("SelectGameObject - Positive - ObjectExists") {
    Game game;
    // Testar att spelet hittar lampan vi lade in i arkivet
    bool success = game.selectGameObject("TestLamp"); 
    CHECK(success == true); 
}

TEST_CASE("SelectGameObject - Negative - ObjectMissing") {
    Game game;
    // Testar att spelet blockerar objekt som inte finns
    bool success = game.selectGameObject("NonExistentSword"); 
    CHECK(success == false);
}

TEST_CASE("SelectInteraction (Object) - Positive - ValidInteraction") {
    Game game;
    GameObject lamp;
    // Testar att "TurnOn" är godkänt för ett objekt
    bool success = game.selectInteraction(&lamp, "TurnOn");
    CHECK(success == true);
}

TEST_CASE("SelectInteraction (Object) - Negative - InvalidInteraction") {
    Game game;
    GameObject lamp;
    // Testar att man inte kan "äta" en lampa
    bool success = game.selectInteraction(&lamp, "Eat");
    CHECK(success == false);
}

TEST_CASE("SelectCharacter - Positive - CharacterExists") {
    Game game;
    // Testar logiken hittar vi vakten i CharacterRepository?
    bool success = game.selectCharacter("Guard");
    CHECK(success == true);
}

TEST_CASE("SelectCharacter - Negative - CharacterMissing") {
    Game game;
    // Testar att spelet nekar en karaktär som inte finns
    bool success = game.selectCharacter("Ghost");
    CHECK(success == false);
}

TEST_CASE("SelectInteraction (Character) - Positive - ValidInteraction") {
    Game game;
    Character guard;
    // Testar logiken "Talk" ska finnas i listInteractionTypes()
    bool success = game.selectInteraction(&guard, "Talk");
    CHECK(success == true);
}

TEST_CASE("SelectInteraction (Character) - Negative - InvalidInteraction") {
    Game game;
    Character guard;
    // Testar att man inte kan använda objekt-interaktioner ("TurnOn") på en karaktär
    bool success = game.selectInteraction(&guard, "TurnOn");
    CHECK(success == false);
}
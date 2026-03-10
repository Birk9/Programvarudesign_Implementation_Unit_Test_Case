#include <gtest/gtest.h>
#include "Game.h"
#include "GameObject.h"
#include "Scene.h"

class InteractWithObjectTest : public ::testing::Test {
protected:
    Game* myGame;
    GameObject* testObject;
    Scene* testScene;

    void SetUp() override {
        myGame = new Game();
        testObject = new GameObject();
        testScene = new Scene();
    }

    void TearDown() override {
        delete myGame;
        delete testObject;
        delete testScene;
    }
};

TEST_F(InteractWithObjectTest, SelectValidObject_PositivePath) {
    EXPECT_NO_THROW(myGame->selectGameObject("Flashlight"));
}

TEST_F(InteractWithObjectTest, StartInteraction_PositivePath) {
    myGame->selectGameObject("Flashlight");
    myGame->selectInteraction(testObject, "turn on");
    EXPECT_NO_THROW(myGame->startInteraction());
}

TEST_F(InteractWithObjectTest, SelectInvalidObject_NegativePath) {
    bool exists = testScene->isGameObject("Ghost");
    EXPECT_FALSE(exists);
}

TEST_F(InteractWithObjectTest, InteractWithNullptr_NegativePath) {
    EXPECT_NO_THROW(myGame->selectInteraction(nullptr, "turn on"));
}
#pragma once
#include <string>
#include <map>
#include "Character.h"

class CharacterRepository {
public:
    CharacterRepository();
    ~CharacterRepository();
    void addCharacter(std::string name, Character* character);
    Character* getCharacter(std::string name);

private:
    std::map<std::string, Character*> characters;
};
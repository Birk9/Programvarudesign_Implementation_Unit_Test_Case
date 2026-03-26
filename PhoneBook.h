#pragma once
#include <string>
#include <map>
#include "Character.h"

class Phonebook {
public:
    Phonebook();
    ~Phonebook();
    void addCharacter(std::string name, Character* character);
    Character* getCharacter(std::string name);

private:
    std::map<std::string, Character*> characters;
};
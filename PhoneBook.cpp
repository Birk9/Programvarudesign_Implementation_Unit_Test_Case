#include "Phonebook.h"

Phonebook::Phonebook() {}
Phonebook::~Phonebook() {}

void Phonebook::addCharacter(std::string name, Character* character) {
    characters[name] = character;
}

Character* Phonebook::getCharacter(std::string name) {
    if (characters.find(name) != characters.end()) {
        return characters[name];
    }
    return nullptr;
}
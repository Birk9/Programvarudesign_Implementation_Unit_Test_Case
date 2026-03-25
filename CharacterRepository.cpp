#include "CharacterRepository.h"

CharacterRepository::CharacterRepository() {}
CharacterRepository::~CharacterRepository() {}

void CharacterRepository::addCharacter(std::string name, Character* character) {
    characters[name] = character;
}

Character* CharacterRepository::getCharacter(std::string name) {
    if (characters.find(name) != characters.end()) {
        return characters[name];
    }
    return nullptr;
}
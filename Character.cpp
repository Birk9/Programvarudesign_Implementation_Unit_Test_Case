#include "Character.h"

Character::Character() {}
Character::~Character() {}

std::vector<std::string> Character::listInteractionTypes() {
    return {"Talk", "Attack", "Trade"}; 
}
#pragma once
#include <string>
#include <vector>
#include "GameElement.h"

class Character : public GameElement {
public:
    Character();
    ~Character();
    std::vector<std::string> listInteractionTypes(); 
};
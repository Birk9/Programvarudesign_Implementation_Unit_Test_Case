#pragma once
#include <string>
#include <vector>
#include "GameElement.h"

class Scene : public GameElement
{
public:
	Scene();
	~Scene();
	std::vector<std::string> listAvailableElements();
	bool isAvailable(std::string gameElementName);
	bool isGameObject(std::string gameElementName);

private:

};
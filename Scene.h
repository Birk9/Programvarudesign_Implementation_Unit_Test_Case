#pragma once
#include <string>

class Scene
{
public:
	Scene();
	~Scene();
	listAvailableElements();
	bool isAvailable(std::string gameElementName);
	bool isGameObject(std::string gameElementName);

private:

};

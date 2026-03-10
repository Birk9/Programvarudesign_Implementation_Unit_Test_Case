#pragma once
#include <string>
#include <vector>
#include "GameElement.h"

class GameObject : public GameElement
{
public:
	std::vector<std::string> listInteractionTypes();
	void startInteraction(std::string theInteractionType);
	std::vector<std::string> listCurrentInteractionOptions();
	void setCurrentInteractionOptions(std::string theOptions);
	void startCurrentInteraction();
	void abortCurrentInteraction();

private:

};
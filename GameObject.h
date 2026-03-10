#pragma once
#include <string>

class GameObject
{
public:
	listInteractionTypes();
	startInteraction(std::string theInteractionType);
	listCurrentInteractionOptions();
	setCurrentInteractionOptions(std::string theOptions);
	startCurrentInteraction();
	abortCurrentInteraction();
private:

};

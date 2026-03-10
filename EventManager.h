#pragma once

class EventManager
{
public:
	EventManager();
	~EventManager();
	createEvent(EventCondition, Event);
	listAffectedEvents(EventCondition);
	triggerEvents(EventCondition);
	clearEvent(EventCondition);
	clearEvent(Event);

private:

};

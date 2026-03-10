#pragma once
#include <string>

// Nu är de två helt unika typer i systemet!
struct EventCondition {
    std::string value;
};

struct Event {
    std::string value;
};

class EventManager {
public:
    EventManager();
    ~EventManager();
    
    void createEvent(EventCondition condition, Event event);
    void listAffectedEvents(EventCondition condition);
    void triggerEvents(EventCondition condition);
    void clearEvent(EventCondition condition);
    void clearEvent(Event event); 

private:
};
#include "EventManager.h"
#include <iostream>

EventManager::EventManager() {}

EventManager::~EventManager() {}

void EventManager::createEvent(EventCondition condition, Event event) {
    std::cout << "EventManager: Create event.\n";
}

void EventManager::listAffectedEvents(EventCondition condition) {
    std::cout << "EventManager: Lists affected events.\n";
}

void EventManager::triggerEvents(EventCondition condition) {
    std::cout << "EventManager: Triggers events for conditions.\n";
}

void EventManager::clearEvent(EventCondition condition) {
    std::cout << "EventManager: Clears events based on condition.\n";
}

void EventManager::clearEvent(Event event) {
    std::cout << "EventManager: Clears specific event.\n";
}
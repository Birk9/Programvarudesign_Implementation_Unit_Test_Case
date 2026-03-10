#include "EventManager.h"
#include <iostream>

EventManager::EventManager() {}

EventManager::~EventManager() {}

void EventManager::createEvent(EventCondition condition, Event event) {
    std::cout << "EventManager: Skapar event.\n";
}

void EventManager::listAffectedEvents(EventCondition condition) {
    std::cout << "EventManager: Listar påverkade events.\n";
}

void EventManager::triggerEvents(EventCondition condition) {
    std::cout << "EventManager: Triggar events för condition.\n";
}

void EventManager::clearEvent(EventCondition condition) {
    std::cout << "EventManager: Rensar event baserat på condition.\n";
}

void EventManager::clearEvent(Event event) {
    std::cout << "EventManager: Rensar specifikt event.\n";
}
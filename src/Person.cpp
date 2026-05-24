#include "../include/Person.h"
#include <cstdlib>

Person::Person(int id,
               double skepticism,
               double trust,
               double influence,
               double activity)
    : id(id),
      skepticism(skepticism),
      trust(trust),
      influence(influence),
      activity(activity),
      exposureCount(0),
      state(State::Unaware) {}

void Person::hearRumor() {
    exposureCount++;

    if (state == State::Unaware) {
        state = State::Considering;
    }
}

void Person::evaluateBelief(double senderInfluence) {

    if (state == State::Rejector ||
        state == State::Believer ||
        state == State::Sharer) {
        return;
    }

    double beliefScore =
        (trust * senderInfluence * exposureCount)
        - skepticism;

    double randomValue =
        static_cast<double>(rand()) / RAND_MAX;

    if (beliefScore > randomValue) {
        state = State::Believer;
    }
}

bool Person::shareRumor() {

    if (state != State::Believer) {
        return false;
    }

    double randomValue =
        static_cast<double>(rand()) / RAND_MAX;

    if (activity > randomValue) {
        state = State::Sharer;
        return true;
    }

    return false;
}

// Getters

int Person::getId() const {
    return id;
}

int Person::getExposureCount() const {
    return exposureCount;
}

State Person::getState() const {
    return state;
}

double Person::getSkepticism() const {
    return skepticism;
}

double Person::getTrust() const {
    return trust;
}

double Person::getInfluence() const {
    return influence;
}

double Person::getActivity() const {
    return activity;
}

// Setter

void Person::setState(State newState) {
    state = newState;
}
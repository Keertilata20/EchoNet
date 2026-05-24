#ifndef PERSON_H
#define PERSON_H

#include <string>

enum class State {
    Unaware,
    Considering,
    Believer,
    Sharer,
    Rejector
};

class Person {
private:
    int id;
    double skepticism;
    double trust;
    double influence;
    double activity;
    int exposureCount;
    State state;

public:
    // Constructor
    Person(int id,
           double skepticism,
           double trust,
           double influence,
           double activity);

    // Core functions
    void hearRumor();
    void evaluateBelief(double senderInfluence);
    bool shareRumor();

    // Getters
    int getId() const;
    int getExposureCount() const;
    State getState() const;

    double getSkepticism() const;
    double getTrust() const;
    double getInfluence() const;
    double getActivity() const;

    // Setter
    void setState(State newState);
};

#endif
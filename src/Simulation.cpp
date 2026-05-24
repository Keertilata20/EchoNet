#include "../include/Simulation.h"
#include <iostream>

using namespace std;

// Constructor
Simulation::Simulation(Network network,
                       Rumor rumor,
                       int maxSteps)
    : network(network),
      rumor(rumor),
      maxSteps(maxSteps) {}

void Simulation::run(int startPersonId) {

    vector<Person>& people =
        network.getPeople();

    // Start rumor
    people[startPersonId].hearRumor();
    people[startPersonId]
        .evaluateBelief(rumor.getVirality());

    cout << "Rumor started at Person "
         << startPersonId
         << endl;

    for (int step = 1;
         step <= maxSteps;
         step++) {

        cout << "\nStep "
             << step
             << endl;

        for (Person& person : people) {

            if (person.shareRumor()) {

                cout << "Person "
                     << person.getId()
                     << " shared rumor\n";

                vector<int> neighbors =
                    network.getConnections(
                        person.getId());

                for (int neighborId :
                     neighbors) {

                        cout << "Person "
     << neighborId
     << " heard rumor from Person "
     << person.getId()
     << endl;

                    people[neighborId]
                        .hearRumor();

                    people[neighborId]
                        .evaluateBelief(
                            person.getInfluence());
                }
            }
            
        }
        int unaware = 0;
int considering = 0;
int believer = 0;
int sharer = 0;
int rejector = 0;

for (Person& p : people) {

    switch (p.getState()) {

        case State::Unaware:
            unaware++;
            break;

        case State::Considering:
            considering++;
            break;

        case State::Believer:
            believer++;
            break;

        case State::Sharer:
            sharer++;
            break;

        case State::Rejector:
            rejector++;
            break;
    }
}

cout << "\nStats:\n";
cout << "Unaware: "
     << unaware
     << endl;

cout << "Considering: "
     << considering
     << endl;

cout << "Believers: "
     << believer
     << endl;

cout << "Sharers: "
     << sharer
     << endl;

cout << "Rejectors: "
     << rejector
     << endl;


    }
}
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
    }
}
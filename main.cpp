#include <iostream>
#include <ctime>

#include "include/Person.h"
#include "include/Network.h"
#include "include/Rumor.h"
#include "include/Simulation.h"

using namespace std;

int main() {

    srand(time(0));

    Network network;

    Person p1(0,0.3,0.8,0.7,0.8);
    Person p2(1,0.5,0.5,0.4,0.7);
    Person p3(2,0.2,0.9,0.8,0.9);

    network.addPerson(p1);
    network.addPerson(p2);
    network.addPerson(p3);

    network.connectPeople(0,1);
    network.connectPeople(1,2);

    Rumor rumor(0.8);

    Simulation sim(
        network,
        rumor,
        5
    );

    sim.run(0);

    return 0;
}
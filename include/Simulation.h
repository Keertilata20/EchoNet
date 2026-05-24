#ifndef SIMULATION_H
#define SIMULATION_H

#include "Network.h"
#include "Rumor.h"

class Simulation {
private:
    Network network;
    Rumor rumor;
    int maxSteps;

public:
    Simulation(Network network,
               Rumor rumor,
               int maxSteps);

    void run(int startPersonId);
};

#endif
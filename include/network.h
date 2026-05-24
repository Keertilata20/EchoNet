#ifndef NETWORK_H
#define NETWORK_H

#include <vector>
#include "Person.h"

class Network {
private:
    std::vector<Person> people;
    std::vector<std::vector<int>> connections;

public:
    // Add a person
    void addPerson(const Person& person);

    // Create friendship
    void connectPeople(int id1, int id2);

    // Getters
    std::vector<Person>& getPeople();
    std::vector<int> getConnections(int id);
};

#endif
#include "../include/Network.h"

// Add person
void Network::addPerson(const Person& person) {

    people.push_back(person);

    // Create empty adjacency list
    connections.push_back({});
}

// Connect two people
void Network::connectPeople(int id1, int id2) {

    connections[id1].push_back(id2);
    connections[id2].push_back(id1);
}

// Getters
std::vector<Person>& Network::getPeople() {
    return people;
}

std::vector<int> Network::getConnections(int id) {
    return connections[id];
}
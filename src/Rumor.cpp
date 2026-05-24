#include "../include/Rumor.h"

// Constructor
Rumor::Rumor(double virality)
    : virality(virality) {}

// Getter
double Rumor::getVirality() const {
    return virality;
}
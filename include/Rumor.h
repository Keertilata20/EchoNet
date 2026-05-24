#ifndef RUMOR_H
#define RUMOR_H

class Rumor {
private:
    double virality;

public:
    // Constructor
    Rumor(double virality);

    // Getter
    double getVirality() const;
};

#endif
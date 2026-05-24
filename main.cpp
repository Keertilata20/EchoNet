#include <iostream>
#include "include/Person.h"

using namespace std;

int main() {

    Person p1(1, 0.3, 0.8, 0.7, 0.6);

    cout << "Initial exposure: "
         << p1.getExposureCount()
         << endl;

    cout << "Hearing rumor..." << endl;

    p1.hearRumor();

    cout << "Exposure after hearing: "
         << p1.getExposureCount()
         << endl;

    p1.evaluateBelief(0.7);

    if (p1.getState() == State::Believer) {
        cout << "Person believed the rumor!" << endl;
    }
    else {
        cout << "Person is still considering." << endl;
    }

    if (p1.shareRumor()) {
        cout << "Person shared the rumor!" << endl;
    }
    else {
        cout << "Person did not share." << endl;
    }

    return 0;
}
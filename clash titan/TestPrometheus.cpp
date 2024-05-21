#include "Prometheus.h"
#include <iostream>

using namespace std;

void testPrometheus() {
    // Create Prometheus
    Prometheus titan("Prometheus1", "Fire", 60, 39, 52, 43);

    // Test getters
    cout << "Testing getter methods..." << endl;
    if (titan.getName() == "Prometheus1") {
        cout << "Passed: getName() == Prometheus1" << endl;
    } else {
        cout << "Failed: getName() != Prometheus1" << endl; // error?
    }
    if (titan.getType() == "Fire") {
        cout << "Passed: getType() == Fire" << endl;
    } else {
        cout << "Failed: getType() != Fire" << endl;
    }
    if (titan.getDamage() == 60) {
        cout << "Passed: getDamage() == 60" << endl;
    } else {
        cout << "Failed: getDamage() != 60" << endl;
    }
    if (titan.getHp() == 39) {
        cout << "Passed: getHp() == 39" << endl;
    } else {
        cout << "Failed: getHp() != 39" << endl;
    }
    if (titan.getAttack() == 52) {
        cout << "Passed: getAttack() == 52" << endl;
    } else {
        cout << "Failed: getAttack() != 52" << endl;
    }
    if (titan.getDefense() == 43) {
        cout << "Passed: getDefense() == 43" << endl;
    } else {
        cout << "Failed: getDefense() != 43" << endl;
    }

    // Test doAttack and takeDamage
    cout << "Testing doAttack() and takeDamage() methods..." << endl;
    Prometheus opponent("Prometheus2", "Fire", 60, 39, 52, 43);
    int initialHpOpponent = opponent.getHp();
    titan.doAttack(&opponent);
    if (opponent.getHp() < initialHpOpponent) {
        cout << "Passed: opponent.getHp() < initialHpOpponent after attack" << endl;
    } else {
        cout << "Failed: opponent.getHp() >= initialHpOpponent after attack" << endl;
    }

    int initialHpTitan = titan.getHp();
    opponent.doAttack(&titan);
    if (titan.getHp() < initialHpTitan) {
        cout << "Passed: titan.getHp() < initialHpTitan after attack" << endl;
    } else {
        cout << "Failed: titan.getHp() >= initialHpTitan after attack" << endl;
    }

    cout << "All Prometheus tests passed!" << endl;
}

int main() {
    testPrometheus();
    return 0;
}

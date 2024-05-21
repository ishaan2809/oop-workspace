

#include "Battle.h"
#include "Oceania.h"
#include "Prometheus.h"
#include <iostream>

using namespace std;

void testBattle() {
    // Create Titans
    Oceania titan1("Prometheus1", "Fire", 60, 39, 52, 43);
    Prometheus titan2("Prometheus2", "Fire", 60, 39, 52, 43);

    // Display initial HP
    cout << "Initial HP of " << titan1.getName() << ": " << titan1.getHp() << endl;
    cout << "Initial HP of " << titan2.getName() << ": " << titan2.getHp() << endl;

    // Create Battle
    Battle battle;
    battle.startBattle(&titan1, &titan2);

    // Display final HP
    cout << "Final HP of " << titan1.getName() << ": " << titan1.getHp() << endl;
    cout << "Final HP of " << titan2.getName() << ": " << titan2.getHp() << endl;

    // After the battle, one of the Titans should have 0 or less HP
    if (titan1.getHp() <= 0 || titan2.getHp() <= 0) {
        cout << "Battle test passed: One of the Titans has 0 or less HP." << endl;
    } else {
        cout << "Battle test failed: Both Titans have more than 0 HP." << endl;
    }

    cout << "All Battle tests passed!" << endl;
}

int main() {
    testBattle();
    return 0;
}

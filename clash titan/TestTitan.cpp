#include <cassert>
#include "Titan.h"
#include <iostream>

using namespace std;

// Derived class to implement the pure virtual methods
class TestTitan : public Titan {
public:
    TestTitan(string name, string type, int damage, int hp, int attack, int defense)
        : Titan(name, type, damage, hp, attack, defense) {}

    void takeDamage(int amount) override {
        int actualDamage = amount - defense;
        if (actualDamage < 0) actualDamage = 0;
        hp -= actualDamage;
    }

    void doAttack(Titan* opponent) override {
        int attackDamage = attack;
        opponent->takeDamage(attackDamage);
    }
};

void testTitan() {
    // Create Titan
    TestTitan titan("TestTitan", "TestType", 50, 100, 30, 10);

    // Test getters
    cout << "Testing getter methods..." << endl;
    if (titan.getName() == "TestTitan") {
        cout << "Passed: getName() == TestTitan" << endl;
    } else {
        cout << "Failed: getName() != TestTitan" << endl;
    }
    if (titan.getType() == "TestType") {
        cout << "Passed: getType() == TestType" << endl;
    } else {
        cout << "Failed: getType() != TestType" << endl;
    }
    if (titan.getDamage() == 50) {
        cout << "Passed: getDamage() == 50" << endl;
    } else {
        cout << "Failed: getDamage() != 50" << endl;
    }
    if (titan.getHp() == 100) {
        cout << "Passed: getHp() == 100" << endl;
    } else {
        cout << "Failed: getHp() != 100" << endl;
    }
    if (titan.getAttack() == 30) {
        cout << "Passed: getAttack() == 30" << endl;
    } else {
        cout << "Failed: getAttack() != 30" << endl;
    }
    if (titan.getDefense() == 10) {
        cout << "Passed: getDefense() == 10" << endl;
    } else {
        cout << "Failed: getDefense() != 10" << endl;
    }

    // Test setters
    cout << "Testing setter methods..." << endl;
    titan.setHp(90);
    titan.setAttack(35);
    titan.setDamage(55);
    titan.setType("NewType");
    if (titan.getHp() == 90) {
        cout << "Passed: setHp(90) and getHp() == 90" << endl;
    } else {
        cout << "Failed: setHp(90) and getHp() != 90" << endl;
    }
    if (titan.getAttack() == 35) {
        cout << "Passed: setAttack(35) and getAttack() == 35" << endl;
    } else {
        cout << "Failed: setAttack(35) and getAttack() != 35" << endl;
    }
    if (titan.getDamage() == 55) {
        cout << "Passed: setDamage(55) and getDamage() == 55" << endl;
    } else {
        cout << "Failed: setDamage(55) and getDamage() != 55" << endl;
    }
    if (titan.getType() == "NewType") {
        cout << "Passed: setType(NewType) and getType() == NewType" << endl;
    } else {
        cout << "Failed: setType(NewType) and getType() != NewType" << endl;
    }

    cout << "All Titan tests passed!" << endl;
}

int main() {
    testTitan();
    return 0;
}

#include "Player.h"
#include <iostream>

void testPlayer() {
    // Create Player
    Player player("Ishaan", 1);

    // Test get_name and get_playerChoice
    std::cout << "Testing get_name() and get_playerChoice() after initialization..." << std::endl;
    std::string expectedName = "Ishaan";
    int expectedChoice = 1;
    std::string actualName = player.get_name();
    int actualChoice = player.get_playerChoice();

    if (actualName != expectedName) {
        std::cout << "Error: Expected name: " << expectedName << ", but got: " << actualName << std::endl;
    } else {
        std::cout << "Passed: Expected name: " << expectedName << ", Actual name: " << actualName << std::endl;
    }

    if (actualChoice != expectedChoice) {
        std::cout << "Error: Expected choice: " << expectedChoice << ", but got: " << actualChoice << std::endl;
    } else {
        std::cout << "Passed: Expected choice: " << expectedChoice << ", Actual choice: " << actualChoice << std::endl;
    }

    // Test set_name and set_playerChoice
    std::cout << "Testing set_name() and set_playerChoice()..." << std::endl;
    player.set_name("Seth");
    player.set_playerChoice(2);
    expectedName = "Seth";
    expectedChoice = 2;
    actualName = player.get_name();
    actualChoice = player.get_playerChoice();

    if (actualName != expectedName) {
        std::cout << "Error: Expected new name: " << expectedName << ", but got: " << actualName << std::endl;
    } else {
        std::cout << "Passed: Expected new name: " << expectedName << ", Actual new name: " << actualName << std::endl;
    }

    if (actualChoice != expectedChoice) {
        std::cout << "Error: Expected new choice: " << expectedChoice << ", but got: " << actualChoice << std::endl;
    } else {
        std::cout << "Passed: Expected new choice: " << expectedChoice << ", Actual new choice: " << actualChoice << std::endl;
    }

    std::cout << "All Player tests passed!" << std::endl;
}

int main() {
    testPlayer();
    return 0;
}

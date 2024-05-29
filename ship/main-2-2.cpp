#include <iostream>
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

int main() {
    // Create a Ship object
    Ship ship(10, 10);
    std::cout << "Initial ship position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";

    // Move the ship
    ship.move(5, 5);
    std::cout << "Ship position after moving: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";

    // Create a Mine object
    Mine mine(20, 20);
    std::cout << "Mine position: (" << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << ")\n";

    // Explode the mine
    Explosion explosion = mine.explode();
    std::cout << "Mine type after exploding: " << mine.getType() << "\n";

    // Apply explosion to ship
    explosion.Apply(ship);
    std::cout << "Ship position after explosion: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";
    std::cout << "Ship type after explosion: " << ship.getType() << "\n";

    return 0;
}

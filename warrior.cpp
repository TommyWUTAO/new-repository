#include "Warrior.h"
#include<iostream>

Warrior::Warrior(std::string name, int health, int damage, std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

std::string Warrior::getWeapon() const {
    return weapon;
}

void Warrior::setWeapon(const std::string& weapon) {
    this->weapon = weapon;
}
void Warrior::swingWeapon(Player* opponent) {
    std::cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    opponent->takeDamage(getDamage());
}

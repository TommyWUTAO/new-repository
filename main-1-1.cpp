#include "Wizard.h"
#include "Warrior.h"
#include<iostream>
int main() {
    // Create a Wizard and a Warrior
    Wizard wizard("Gandalf", 100, 15, 20);  // 15 is the damage (not used), 20 is the mana
    Warrior warrior("Aragorn", 120, 18, "Sword");

    // Battle Simulation
    while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
        wizard.castSpell(&warrior);
        if (warrior.getHealth() > 0) {
            warrior.swingWeapon(&wizard);
        }
    }

    // Determine the winner
    if (wizard.getHealth() > 0) {
        std::cout << wizard.getName() << " wins the battle!" << std::endl;
    } else if (warrior.getHealth() > 0) {
        std::cout << warrior.getName() << " wins the battle!" << std::endl;
    } else {
        std::cout << "It's a draw!" << std::endl;
    }

    return 0;std
}
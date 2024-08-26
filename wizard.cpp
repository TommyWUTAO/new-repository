#include<iostream>
#include"Wizard.h"
Wizard::Wizard(std::string name,int health,int damage,int mana):
Player(name,health,damage),mana(mana){}
int Wizard::getMana() const {
    return mana;
}

void Wizard::setMana(int mana) {
    this->mana = mana;
}

void Wizard::castSpell(Player* opponent) {
    std::cout << getName() << " casts a spell on " << opponent->getName() << " for " << mana << " damage.\n";
    opponent->takeDamage(getDamage());
}

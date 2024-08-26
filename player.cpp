#include<iostream>
#include"player.h"
Player::Player(std::string name, int health, int damage):name(name),healthy(health),damage(damage){}
std::string Player::getName() const{
    return name;
}
void Player::setName(const std::string& name)
{
    this->name=name;
}
int Player::getHealth() const
{
    return healthy;
}
void Player::setHealth(int health)
{
    healthy=health;
}
int Player::getDamage() const
{
    return damage;

}
void Player::setDamage(int damage)
{
    this->damage=damage;
}
void Player::attack(Player* opponent,int damage)
{
    // std::cout<<"Attack"<<opponent->getName()<<"damage"<<opponent->getDamage()<<std::endl;
    opponent->takeDamage(damage);
}
void Player::takeDamage(int damage)
{
    healthy -= damage;
    std::cout << getName() << " takes " << damage << " damage. Remaining health: " << healthy << "\n";
}
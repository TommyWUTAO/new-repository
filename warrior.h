#ifndef WARRIOR_H
#define WARRIOR_H
#include<string>
#include"player.h"
class Warrior:public Player
{
    private:
    std::string weapon;
    public:
    Warrior(std::string name, int health, int damage, std::string weapon);

    std::string getWeapon() const;
    void setWeapon(const std::string& weapon);

    void swingWeapon(Player* opponent);
};
#endif
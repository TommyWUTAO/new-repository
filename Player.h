#ifndef PLAYER_H
#define PLAYER_H
#include<string>
class Player
{
    private:
    int healthy;
    int damage;
    std::string name;
    public:
    Player(std::string name, int health, int damage);
    std::string getName() const;
    void setName(const std::string& name);
    int getHealth() const;
    void setHealth(int health);
    int getDamage() const;
    void setDamage(int damage);

    void attack(Player* opponent);
    void takeDamage(int damage);
};
#endif
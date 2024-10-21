#include "GameEntity.h"
class Mine : public GameEntity {
public:
    Mine(int x, int y) : GameEntity(x, y, GameEntityType::MineType) {}

    Explosion explode() {
        type = GameEntityType::NoneType; // Change type after exploding
        return Explosion(std::get<0>(position), std::get<1>(position));
    }
};
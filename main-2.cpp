int main() {
    Ship ship(1, 1);
    Mine mine(2, 2);

    std::cout << "Initial ship position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")" << std::endl;
    
    // Simulate explosion
    Explosion explosion = mine.explode();
    explosion.apply(ship);

    std::cout << "Ship position after explosion: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")" << std::endl;

    return 0;
}
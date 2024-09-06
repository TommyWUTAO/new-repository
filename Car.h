#ifndef CAR_H
#define CAR_H
class Car
{
    protected:
    int price;
    int emissions;
    public:
    Car(int price);
    Car();

    // Getters
    int get_price();
    int get_emissions();

    // Setters
    void set_price(int price);
    void set_emissions(int emissions);

    // Methods
    virtual void drive(int kms);
};
#endif
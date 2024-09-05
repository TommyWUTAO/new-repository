class AirCraft {
private:
    int weight;
    float fuel;
    int numberOfFlights;

public:
    AirCraft(); // Default constructor
    AirCraft(int w); // Constructor with weight

    // Getter and setter methods
    int get_weight() const;
    void set_weight(int w);

    float get_fuel() const;
    void set_fuel(float f);

    int get_numberOfFlights() const;
    void set_numberOfFlights(int n);

    virtual void fly(int headwind, int minutes); // Virtual fly method
    void refuel(); // Refuel method
};
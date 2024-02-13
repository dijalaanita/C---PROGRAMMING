#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;
    int speed; // Speed of the car

public:
    // Constructor
    Car(std::string make, std::string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
        speed = 0; // Initialize speed to 0 when the car is created
    }

    // Member function to display car information
    void displayInfo() {
        std::cout << "Make: " << make << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Current Speed: " << speed << " km/h" << std::endl;
    }

    // Member function to check if the car is vintage (more than 30 years old)
    bool isVintage() {
        return (2024 - year) >= 30;
    }

    // Setter function to update the year of the car
    void setYear(int year) {
        this->year = year;
    }

    // Accessor function to retrieve the year of the car
    int getYear() {
        return year;
    }

    // Member function to accelerate the car
    void accelerate(int increment) {
        speed += increment;
    }

    // Member function to brake the car
    void brake(int decrement) {
        if (speed - decrement < 0) {
            speed = 0;
        } else {
            speed -= decrement;
        }
    }
};

int main() {
    // Creating an instance of Car
    Car myCar("Toyota", "Corolla", 2010);

    // Displaying car information
    std::cout << "Car Information:" << std::endl;
    myCar.displayInfo();

    // Accelerating the car
    myCar.accelerate(30);
    std::cout << "Car Accelerated. Current Speed: " << myCar.getYear() << " km/h" << std::endl;

    // Braking the car
    myCar.brake(10);
    std::cout << "Car Braked. Current Speed: " << myCar.getYear() << " km/h" << std::endl;

    return 0;
}

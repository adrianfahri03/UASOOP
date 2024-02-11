#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    int year;
    int speed; // dalam km/jam

public:
    Car(string brand, int year, int speed) {
        this->brand = brand;
        this->year = year;
        this->speed = speed;
    }

    double calculate_time(double distance) {
        return distance / speed;
    }
};

int main() {
    Car my_car("Ferrari", 2013, 350);

    double distance = 60; // dalam km
    double time_taken = my_car.calculate_time(distance);

    cout << "Time taken to travel " << distance << " km: " << time_taken << " hours" << endl;

    return 0;
}

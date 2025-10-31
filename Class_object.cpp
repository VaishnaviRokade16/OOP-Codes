#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Tesla";
    car1.year = 2024;
    car1.displayInfo();
    return 0;
}

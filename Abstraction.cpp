#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow" << endl;
    }
};

int main() {
    Cat c;
    c.sound();
    return 0;
}

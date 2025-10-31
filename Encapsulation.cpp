#include <iostream>
using namespace std;

class Person {
private:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

int main() {
    Person p;
    p.setName("Vaishnavi");
    cout << "Name: " << p.getName();
    return 0;
}

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 10);
    cout << "Sum: " << result;
    return 0;
}

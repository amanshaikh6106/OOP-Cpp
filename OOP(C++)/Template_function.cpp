#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Integer: " << add(10, 20) << endl;
    cout << "Float: " << add(2.5f, 3.5f) << endl;
    cout << "Double: " << add(2.55, 3.75) << endl;

    return 0;
}
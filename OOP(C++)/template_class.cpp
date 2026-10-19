#include <iostream>
using namespace std;

template <class T>
class Addition {
    T a, b;

public:
    Addition(T x, T y) {
        a = x;
        b = y;
    }

    T add() {
        return a + b;
    }
};

int main() {
    Addition<int> obj1(10, 20);
    Addition<float> obj2(2.5f, 3.5f);
    Addition<double> obj3(2.55, 3.75);

    cout << "Integer: " << obj1.add() << endl;
    cout << "Float: " << obj2.add() << endl;
    cout << "Double: " << obj3.add() << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Demo {
public:
    void divide(int a, int b) {
        try {
            if (b == 0) {
                throw b;
            }
            cout << "Result = " << a / b << endl;
        }
        catch (int x) {
            cout << "Error: Division by zero!" << endl;
        }
    }
};

int main() {
    Demo d;
    d.divide(10, 2);
    d.divide(10, 0);

    return 0;
}
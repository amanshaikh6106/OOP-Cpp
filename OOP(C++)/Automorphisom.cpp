#include <iostream>
using namespace std;

class Automorphic {
private:
    int num;

public:
    Automorphic(int n) {
        num = n;
    }

    void check() {
        int square = num * num;
        int temp = num;

        // Find number of digits
        int digits = 0;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        int divisor = 1;

        for (int i = 0; i < digits; i++) {
            divisor *= 10;
        }

        if (square % divisor == num)
            cout << num << " is an Automorphic number.";
        else
            cout << num << " is not an Automorphic number.";
    }
};

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Automorphic obj(n);
    obj.check();

    return 0;
}
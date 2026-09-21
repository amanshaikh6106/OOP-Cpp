#include <iostream>
using namespace std;

class Armstrong {
private:
    int num;

public:
    Armstrong(int n) {
        num = n;
    }

    void check() {
        int original = num;
        int temp = num;
        int sum = 0;
        int digits = 0;

        // Count number of digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Calculate Armstrong sum
        while (temp != 0) {
            int digit = temp % 10;

            int power = 1;
            for (int i = 0; i < digits; i++) {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == original)
            cout << num << " is an Armstrong number.";
        else
            cout << num << " is not an Armstrong number.";
    }
};

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Armstrong obj(n);
    obj.check();

    return 0;
}
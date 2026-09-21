#include <iostream>
using namespace std;

class Buzz {
private:
    int num;

public:
    Buzz(int n) {
        num = n;
    }

    void check() {
        if (num % 7 == 0 || num % 10 == 7)
            cout << num << " is a Buzz number.";
        else
            cout << num << " is not a Buzz number.";
    }
};

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Buzz obj(n);
    obj.check();

    return 0;
}
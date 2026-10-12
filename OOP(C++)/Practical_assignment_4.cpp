
#include <iostream>
using namespace std;

class Array {
private:
    int* values;
    int n;

public:
    // Constructor
    Array(int size) {
        n = size;
        values = new int[n];
    }

    // Input values using pointer
    void readValues() {
        for (int i = 0; i < n; i++) {
            cout << "Enter value " << i + 1 << ": ";
            cin >> *(values + i);
        }
    }

    // Calculate sum and maximum
    void analyseValues() {
        int sum = 0;
        int maximum = *values;

        for (int i = 0; i < n; i++) {
            int current = *(values + i);
            sum += current;

            if (current > maximum) {
                maximum = current;
            }
        }

        cout << "\nStored values: ";
        for (int i = 0; i < n; i++) {
            cout << *(values + i) << " ";
        }

        cout << "\nSum = " << sum;
        cout << "\nMaximum = " << maximum << endl;
    }

    // Destructor
    ~Array() {
        delete[] values;
        cout << "Dynamic memory released." << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of elements must be positive." << endl;
        return 0;
    }

    Array obj(n);

    obj.readValues();
    obj.analyseValues();

    return 0;
}

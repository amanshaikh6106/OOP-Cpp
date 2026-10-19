#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    string str1 = " Problem solving with cpp ";

    string str2 = std::move(str1);

    cout << "str1: " << str1  << endl;
    cout << "str2: " << str2  << endl;

    return 0;
}
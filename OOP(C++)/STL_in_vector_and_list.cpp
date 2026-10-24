#include <iostream>
using namespace std;
 
template <class T>
class Calculator
{
    T a, b;
 
public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }
 
    T add()
    {
        return a + b;
    }
 
    T multiply()
    {
        return a * b;
    }
};
 
int main()
{
    Calculator<int> c1(10, 20);
 
    cout << "Integer addition: "
<< c1.add() << endl;
 
    cout << "Integer multiplication: "
<< c1.multiply() << endl;
 
    Calculator<double> c2(2.5, 4.0);
 
    cout << "Double addition: "
<< c2.add() << endl;
 
    cout << "Double multiplication: "
<< c2.multiply() << endl;
 
    return 0;
}
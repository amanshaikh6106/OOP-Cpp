#include <iostream>
using namespace std;

class b
{
public:
    int prn;

    
    b(int x)
    {
        prn = x;
        cout << "Constructor called" << endl;
    }

    
    b(const b &obj)
    {
        prn = obj.prn;
        cout << "Copy Constructor called" << endl;
    }

    
    void display()
    {
        cout << "PRN: " << prn << endl;
    }

    
    ~b()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    b mayur(112);

    b student(mayur);

    mayur.display();
    student.display();

    return 0;
}
#include <iostream>
using namespace std;
class A
{
public:
    // constructor
    A()
    {
        cout << "Constructor called\n";
    }

    // destructor
    ~A()
    {
        cout << "Destructor called\n";
    }
};
int main()
{
    A obj1; // Constructor Called

    for (int i = 0; i < 3; i++)
        A obj2; // Constructor Called

    A obj3; // Destructor Called for obj2
} // Destructor called for obj1
#include <iostream>
using namespace std;
// first name space
namespace first_space
{
    void func1()
    {
        cout << "Inside first_space" << endl;
    }
}
// second name space
namespace second_space
{
    void func2()
    {
        cout << "Inside second_space" << endl;
    }
}
using namespace second_space;
int main()
{
    // This calls function from first name space.
    first_space::func1();
    func2();
    return 0;
}
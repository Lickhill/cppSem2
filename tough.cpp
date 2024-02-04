#include <iostream>
using namespace std;

class sum
{
public:
    int num1, num2;
};

class res : public sum
{

public:
    int add(int num1, int num2)
    {
        return num1 + num2;
    }
};
int main()
{
    res obj;
    cout << obj.add(5, 6);
}
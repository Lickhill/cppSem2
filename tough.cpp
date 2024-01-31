#include <iostream>
using namespace std;

class cube
{
public:
    int side;

    int getVol()
    {
        return side * side * side;
    }
};

int main()
{
    cube mycube;
    mycube.side = 4;

    cout << mycube.getVol();
}
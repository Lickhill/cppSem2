#include <iostream>
using namespace std;

class traverse
{
public:
    int size;
    int arr[];

    void get()
    {
        cout << "Enter size of array: ";
        cin >> size;
        cout << "Enter elements of array: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        arr[size];
    }

    void
    printing()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "\t";
        }
    }
};

int main()
{
    traverse obj;
    obj.get();
    obj.printing();
}
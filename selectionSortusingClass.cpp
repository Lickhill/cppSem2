#include <iostream>
using namespace std;

class SelectionSort
{
public:
    int size = 0;

    void getSize()
    {
        cout << "Enter the size of the array";
        cin >> size;
        getEle();
    }

    void getEle()
    {
        int arr[size];
        cout << "Enter the array elements";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        sorting(arr);
    }

    void sorting(int arr[])
    {
        int min = 0;
        for (int i = 0; i < size; i++)
        {
            min = i;
            for (int j = i; j < size; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        printing(arr);
    }

    void printing(int arr[])
    {
        cout << "The sorted array is";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "\t";
        }
    }
};

int main()
{
    SelectionSort obj;
    obj.getSize();
    return 0;
}
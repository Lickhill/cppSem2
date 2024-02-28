#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

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

    cout << "The sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
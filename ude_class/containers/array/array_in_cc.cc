#include <iostream>
#include <array>

using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// function that takes std::array of 5 integers

void printArray(std::array<int, 5> arr)
{
    for (auto el : arr)
    {
        cout << el << " ";
    }
    cout << endl;
}

int main()
{
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    // // elements can be accesed and asssigned using array index
    // cout << "array[3]: " << arr[3] << endl;

    // arr[2] = 6;

    // cout << "array[2]: " << arr[2] << endl;

    // cout << "printing array using for loop james" << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // };

    // function that takes bultin array as pointer to int
    // n is the number of elements in the array

    cout << "Built in array as pointer to int" << endl;
    int arr1[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    printArray(arr1, n);

    // function that takes std::array of 5 integers
    cout << "std::array of 5 integers" << endl;
    std::array<int, 5> arr2 = {10, 20, 30, 40, 50};
    printArray(arr);
}

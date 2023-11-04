#include <iostream>
#include <map>
#include <vector>
using namespace std;

std::map<int, int> Map;

bool checker_nos(int number)
{
    if (Map.find(number) == Map.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int fibonacci(int number)
{
    if (number == 0 || number == 1)
    {
        return number;
    }

    if (!checker_nos(number))
    {
        return Map[number];
    }

    int prev = 0;
    int current = 1;
    for (int i = 2; i <= number; ++i)
    {
        int next = prev + current;
        Map[i] = next;
        prev = current;
        current = next;
    }
    return Map[number];
}

int main()
{
    int number;
    cout << "Enter the fibonacci: ";
    cin >> number;

    for (int i = 0; i <= number; i++)
    {
        cout << fibonacci(i) << ", ";
    }
    return 0;
}

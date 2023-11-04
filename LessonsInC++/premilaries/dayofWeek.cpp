/*program for displaying day name using else if ladder*/
#include <iostream>

using namespace std;

int main()
{
    //int day1 = 1; int day2 = 2; int day3 = 3; int day4 = 4; int day5 = 5; int day6 = 6; int day7 = 7;
    int day;
    cout << "Enter the number you want to see the day of the week for: ";
    cin >> day;
    if (day == 1)
    {
        cout << "Today is Monday " << endl;
    }
    else if (day == 2)
    {
        cout << "Today is Tuesday " << endl;
    }
    else if (day == 3)
    {
        cout << "Today is Wednesday " << endl;
    }
    else if (day == 4)
    {
        cout << "Today is Thursday " << endl;
    }

    else if (day == 5)
    {
        cout << "Today is Friday " << endl;
    }
    else if (day == 6)
    {
        cout << "Today is Saturday " << endl;
    }
    else if (day == 7)
    {
        cout << "Today is Sunday " << endl;
    }
    else{
        cout << " Invalid day " << endl;
    }
    return 0;
}

/*program for displaying day name using else if ladder*/ // else if and switch case

// switch case

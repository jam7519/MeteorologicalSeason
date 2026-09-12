// Name: James Jakubczyk
// Date: September 12, 2026
// Project Name: Meteorological Season

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char hemisphere;
    int month;
    string season;

    cout << "Enter a hemisphere (N - S): ";
    cin >> hemisphere;

    if (hemisphere != 'N' && hemisphere != 'S')
    {
        cout << "Please enter a valid hemisphere (N - S)." << endl;
        return 0;
    }

    cout << "Enter a month number (1 - 12): ";
    cin >> month;

    if (month < 1 || month > 12)
    {
        cout << "Please enter a valid month number (1 - 12)." << endl;
        return 0;
    }

    if (hemisphere == 'N')
    {
        if (month == 12 || month == 1 || month == 2)
        {
            season = "Winter";
        }
        else if (month >= 3 && month <= 5)
        {
            season = "Spring";
        }
        else if (month >= 6 && month <= 8)
        {
            season = "Summer";
        }
        else
        {
            season = "Fall";
        }
    }
    else if (hemisphere == 'S')
    {
        if (month == 12 || month == 1 || month == 2)
        {
            season = "Summer";
        }
        else if (month >= 3 && month <= 5)
        {
            season = "Fall";
        }
        else if (month >= 6 && month <= 8)
        {
            season = "Winter";
        }
        else
        {
            season = "Spring";
        }
    }

    cout << "The season is " << season << "." << endl;

    return 0;
}


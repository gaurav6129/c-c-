#include <iostream>
using namespace std;
int main()
{

    int year;

    cout << "enter year" << endl;
    cin >> year;
    if (year % 4 == 0)
    {
        cout << year << endl
             << "leap year";
        else cour << "not leep year";
    }
    else if (year % 100 == 0)
    {
        cout << year << endl
             << "not leap year";
    }
    else if (year % 400 == 0)
    {
        cout << year << endl
             << "not leap year";
    }
}
return 0;
}

/* code */

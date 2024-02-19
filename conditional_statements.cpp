#include <iostream>
using namespace std;

int main()
{
    int time = 22;
    int age;
    cout << "Enter The Age :";
    cin >> age;
    if (age > 150)
    {
        cout << "Invalid";
    }
    else if (age >= 18)
    {
        cout << "You Can Vote";
    }
    else
    {
        cout << "You cannot Vote";
    }
    if (time < 10)
    {
        cout << "Good morning.";
    }
    else if (time < 20)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.";
    }

    // Switch (Snippet)
    switch (age)
    {
    case 12:
        cout << "You are 12 years Old"<<endl;
        //break; if this is commented it will excute below case as well until it breaks
    case 18:
        cout << "You are 18 years Old"<<endl;
        break;
    case 13:
        cout << "You are 13 years Old"<<endl;
        break;
    default:
        cout << "You are neither 12 / 13 /18"<<endl;
        break; //we can keep or avoid break as it is default
    }
    return 0;
}

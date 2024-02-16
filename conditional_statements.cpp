#include <iostream>
using namespace std;

int main() {
  int time = 22;
  int age;
  cout<<"Enter The Age :";
  cin>>age;
  if(age>150)
  {
    cout<<"Invalid";
  }
  else if (age>=18)
  {
    cout<<"You Can Vote";
  }
  else
  {
    cout<<"You cannot Vote";
  }
  if (time < 10) {
    cout << "Good morning.";
  } else if (time < 20) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }

  //Switch (Snippet)
  switch (age)
  {
  case 12:
    cout<<"You are 12 years Old";
    break;
  case 18:
    cout<<"You are 18 years Old";
    break;
  case 13:
    cout<<"You are 13 years Old";
    break;
  default:
    cout<<"You are neither 12 / 13 /18";
    break;
  }
  return 0;
}

#include <iostream>
#include <string>

using namespace std;

// Classes and Objects

// OOP-Object Orient Programming

// Creating Class(Template) and Objects
class Employee
{
public:
    string name;
    int salary;
    // Constructer
    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    // creating method to access the details of employee

    void printDetails()
    {
        cout << "The Name of Our Employee is: " << this->name << " And His Salary is " << this->salary << " Dollars" << endl;
    }
    void getSecretPassword()
    {
        cout << "The S P of Employee is: " << this->secretPassword << " Address " << &secretPassword << endl;
    }

private:
    int secretPassword;
};
//inheritance

class Teacher: public Employee
{
    public:
    int errors;
    
};


int main()
{
    Employee har("saisurya", 500, 123);
    har.printDetails();
    // Employee har;
    // har.name = "SaiSurya";
    // har.salary = 500;
    // har.printDetails();
    // cout << "The Name of Our Employee is: " << har.name << " And His Salary is " << har.salary<<" Dollars"<< endl;
    // we can access via the method as well as it is public we are able to use all the properties
    // if it is private we cannot access the variables externally
    // we should define inside the class to access the private variables
    // cout<<har.secretPassword; as we cannot access the Private clasees
    har.getSecretPassword();
    return 0;
}
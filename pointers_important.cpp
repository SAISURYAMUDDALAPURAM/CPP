#include <iostream>

using namespace std;

int main()
{
    //POINTERS: It is a Datatype Variable which will hold address of other DataTypes / Variable
    int a=3;
    //pointer
    int* b=&a;
    //pointer to pointer
    int** c=&b;

    cout<<"a val: "<<a<<"adress of a: "<<&a<<" or: "<<b<<" Address of b: "<<c<<" or: "<<&b<<" value of b: "<<*c<<" or: "<<b<<" value of a: "<<**c<<endl;
    return 0;
}
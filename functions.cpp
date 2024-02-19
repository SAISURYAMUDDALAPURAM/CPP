#include <iostream>

using namespace std;
//f(x)= x^2+x+2


int square(int x)
{
 int c;
 c=x^2;
 return c;

}
int multiply(int x)
{
    int m;
    m=2*x;
    return m;
}

int main()
{   
    int x=10,y,z;
    y=square(x);
    z=multiply(x);
    cout<<"the Value of X^2+x+2 is: "<<y+z+2<<endl;
    return 0;
}
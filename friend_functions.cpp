#include <iostream>

using namespace std;

class Complex
{
    int a,b;
    public:
        void setNum(int n1,int n2)
        {
            a=n1;
            b=n2;
        }
        friend Complex sumComp(Complex o1,Complex o2);
        void printNum()
        {
            cout<<"Your Number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComp(Complex o1,Complex o2)
{
    Complex o3;
    o3.setNum((o1.a+o2.a),(o1.b+o2.b)); //we cannot access the friends data direclty compiler asks that i need a written one where Complex is where it is giving rights
    return o3;
}

int main()
{
    Complex c1,c2, sum;
    c1.setNum(1,4);
    c2.setNum(5,8);
    c1.printNum();
    c2.printNum();
    sum=sumComp(c1,c2);
    sum.printNum();
    return 0;
}
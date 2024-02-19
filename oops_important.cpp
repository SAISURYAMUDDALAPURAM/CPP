#include <iostream>
#include <string>

using namespace std;

class employee{
    private:
        int salary;

    public:
        int eId;
        string name;
        void setData(int _salary); //Declaring the Function Telling Compiler that it Should find the Function after wards in the Program
        void getData()
        {
            cout<<"The Employee ID is: "<<eId<<endl;
            cout<<"The Employee NAME is: "<<name<<endl;
            cout<<"The Employee SALARY is: "<<salary<<endl;
        }
};
//declaration of the objects while declaring the class
//syntax
/*
class employee
{

} saisurya,sai,surya;
*/
void employee :: setData(int _salary)
{
    salary= _salary;
}

int main()
{
    employee saisurya;
    saisurya.name="SaiSurya M";
    saisurya.eId=2179414;
    saisurya.setData(50000);
    saisurya.getData();
    return 0;
}
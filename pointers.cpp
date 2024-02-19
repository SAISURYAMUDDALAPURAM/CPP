 #include <iostream>
 
 using namespace std;

 int main()
 {
    // int a=10;
    // int* ptra;
    float a=10;
    float* ptra;
    ptra=&a;
    cout<<"The Value of a is "<<a<<endl;
    cout<<"The Value of a is "<<*ptra<<endl;
    cout<<"The Address of a is "<<&a<<endl;
    cout<<"The Address of a is "<<ptra<<endl;
    return 0;
 }
#include <iostream>

using namespace std;
//Arrays->It is a concept of list basically 
int main()
{   
    int arr[10]={1,2,3,4,5}; // either we can just initialise by int arr[]
    //size will automatically get adjusted accordingly
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    
    //task on arrays

    int marks[6];

    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout<<"Enter The Marks of "<<i<<"th Student"<<endl;
        cin>>marks[i];
    }
    
    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout<<"The Marks of "<<i+1<<"th Student is "<<marks[i]<<endl;
    }
    

    int arr2d[2][2]={{2,4},{6,8}};

    for (int i=0;i<2;i++)
    {
        for (int j=0; j<2;j++)
        {
            cout<<"The Value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
        }
    }
    return 0;
}
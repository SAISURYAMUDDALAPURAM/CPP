#include <iostream>
#include <string>

using namespace std;

//structures
struct emp{
int eId;
string eName;
char eLetter;
float eMarks;
};

//typedefs
typedef struct employee{
int eId;
string eName;
char eLetter;
}e;

//unions
union money{
int eId_;
char eLetter_;
float eMarks_;   
};

int main()
{
    //enums
    enum grade{A,B,C,D};
    grade c_grade=C;
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<(c_grade==2)<<endl;

    //structure
    struct emp saisurya;
    saisurya.eId=2179414;
    saisurya.eLetter='c';
    saisurya.eMarks=99.999;
    cout<<saisurya.eId<<endl;
    cout<<saisurya.eName<<endl;//will simply keep it empty line 
    cout<<"exit from struct"<<endl;

    //typedef
    e sai;
    sai.eId=123;
    sai.eName="saisurya";
    cout<<sai.eId<<endl;
    cout<<sai.eLetter<<endl;
    cout<<"exit from typedef"<<endl;

    //union
    union money m1;
    m1.eId_=10;
    cout<<m1.eId_<<endl;

    return 0;
}
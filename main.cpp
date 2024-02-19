// this is the first programe(CTRL+/) for commenting
#include <iostream>

using namespace std;

int main()
{ // defining the main function
	cout << "Hello World";
	std::cout << "Hello World 2"; // using namespace std; we can easily write cout than including std::cout
	// comment
	// comment
	// comment
	/*
	comment multiline
	comment multiline
	*/
	cout << "hello"
		 << "world"
		 << "sai" << endl;
	cout << "this is new"
		 << " line here after using 'ENDL'";
	/*
	The C++Programming language is case sensitive with the
	Variables Initialised
	int Sai=1;
	int sai=1;
	both are different
	and
	The Variables are dynamically Initialised but
	we should initialise once and we can make them the
	Constants that will not be changed in between
	i.e., You Cannot initialise any varible more than
	one Time with same name it throws error
	int sai;
	float sai;
	int sai;
	Variables Can Start With
	_ or any letter
	Variables Cannot Strt with Number
	int 1_sai=1;  (not possible)
	but in between you can use number for declaring Variables
	int sai_1=1;
	*/
	int sai = 1;
	short sai123 = 1;
	long _sai = 1;
	long long __sai = 1;
	cout << sai << endl;
	// camelCase Notation
	/*we can make use of the
	notations to use variables so that if short form is used
	then it will automatically suggest the variables
	ex: marksInMaths -> mim (automatically suggests the variabke)*/
	int marksInMaths = 80;
	cout << "The Marks of student in Maths is " << marksInMaths;

	// datatypes(the Architectural Bites allowing - search)
	// int types
	short a;
	int b;
	long c;
	long long d;
	// float types
	float score = 45.45354685969;
	double score2 = 45.45364857940493;
	long double score3 = 45.4526769060056;
	cout << score << " " << score2 << " " << score3;
	// Constatnt
	// we shpuld not just initialise variables we should also
	// we should initialise the value as well for constants
	int const u = 100;
	float const e = 20.0;
	cout << " ________________________ " << endl;
	// Inputs from user "cin" (alt+presscursor) for multiline single edits
	int xyz;
	int yzx;
	cout << "enter the a value " << endl;
	cin >> xyz;
	cout << "enter the b value " << endl;
	cin >> yzx;
	cout << xyz + yzx << endl;
	// Operators and Type Casting to change to desired types
	int x, y;
	cout << "Enter x: " << endl;
	cin >> x;
	cout << "Enter y: " << endl;
	cin >> y;
	cout << "X+Y is " << x + y << endl;
	cout << "X-Y is " << x - y << endl;
	cout << "X*Y is " << x * y << endl;
	cout << "X/Y is " << x / y << endl;
	cout << "X/Y is " << (float)x / y << endl;
	/*Operator	Description
		&	Bitwise AND Operator
		|	Bitwise OR Operator
		^	Bitwise XOR Operator
		~	Bitwise Complement Operator
		<<	Bitwise Shift Left Operator
		>>	Bitwise Shift Right Operator
	*/
	return 0;
}

//============================================================================
// Name        : BasicRecursionProblem.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int factorial(int n)
{
	if(n<0)
		return -1;
	if(n==1 || n==0)
		return 1;
	else return n*factorial(n-1);
}
int main() {
	int n;
	char ans;
	do{
	cout << "Enter number::" << endl;
	cin>>n;
	cout<<"Factorial is:"<<factorial(n)<<endl;
	cout<<"Do you want to continue? Enter y to continue";
	cin>>ans;
	}while(ans=='y' || ans=='Y');
	return 0;
}

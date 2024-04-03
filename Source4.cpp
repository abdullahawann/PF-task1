#include <iostream>
using namespace std;
int main()
{
	int variable;
	cout<<"enter the variable"<<endl;
	cin>>variable;
	cout << "value after pre increment :";
	cout<<++variable<<endl;
	cout << "value after post decrement :";
	cout<<variable--<<endl;
	system("pause");
	return 0;

}
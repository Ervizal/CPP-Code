#include <iostream>
using namespace std;
int main()
{
	string n;
	int a, b;
	cout<<"============================================"<<endl;
	cout<<"======= Welcome To Simple Calculator ======="<<endl;
	cout<<"============================================"<<endl;
	system("cls");
	cout<<"Choose what do you want the computer do"<<endl;
	cout<<"list order:"<<endl<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl<<"5. Modullo"<<endl;
	cout<<"(write the order)"<<endl;
	cin>>n; cout<<endl;
	if(n == "Addition")
	{
		cout<<"write your first number"<<endl; cin>>a;
		cout<<"write your second number"<<endl; cin>>b;
		cout<<"the addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
	}
	else if(n == "Subtraction")
	{
		cout<<"write your first number"<<endl; cin>>a;
		cout<<"write your second number"<<endl; cin>>b;
		cout<<"the addition of "<<a<<" and "<<b<<" is "<<a-b<<endl;
	}
	else if(n == "Multiplication")
	{
		cout<<"write your first number"<<endl; cin>>a;
		cout<<"write your second number"<<endl; cin>>b;
		cout<<"the addition of "<<a<<" and "<<b<<" is "<<a*b<<endl;
	}
	else if(n == "Division")
	{
		cout<<"write your first number"<<endl; cin>>a;
		cout<<"write your second number"<<endl; cin>>b;
		cout<<"the addition of "<<a<<" and "<<b<<" is "<<a/b<<endl;
	}
	else if(n == "Modullo")
	{
		cout<<"write your first number"<<endl; cin>>a;
		cout<<"write your second number"<<endl; cin>>b;
		cout<<"the addition of "<<a<<" and "<<b<<" is "<<a%b<<endl;
	}
return 0;
}

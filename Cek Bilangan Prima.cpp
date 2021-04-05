#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int p, angka, number;
	cout<<"======================================"<<endl;
	cout<<"======== Prime Number Checker ========"<<endl;
	cout<<"======================================"<<endl;
	cout<<"Write your number : ";
	cin>>number;
	angka = number;
	p=0; 
	for(int i=1; i<=number; i++)
	{
		if((angka % i) == 0)
		{
			p += 1;
		}
		else
		{
			continue;
		}
	}
	if(p == 2)
	{
		cout<<angka<<" is a prime Number"<<endl;
	}
	else
	{
		cout<<angka<<" is not a Prime Number"<<endl;
	}
return 0;
}

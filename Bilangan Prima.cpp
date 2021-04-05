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
	p=0;
	int c;
	c = 0;
	if(number >= 1)
	{
		for(int i=1; i<=number; i++)
		{
			angka = i;
			for(int j=1; j<=i; j++)
			{
				if((i % j) == 0)
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
			c += 1;
			}
			else
			{
				cout<<angka<<" is not a Prime Number"<<endl;
			}
			p = 0;
		}	
	}
	else
	{
		cout<<"Wrong input format"<<endl;
	}
	cout<<"Jumlah Bilangan Prima antara 1 - "<<number<<" adalah "<<c<<endl;
return 0;
}

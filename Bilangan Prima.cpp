#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int m, n;
	float o;
	cout<<"======================================"<<endl;
	cout<<"======== Prime Number Checker ========"<<endl;
	cout<<"======================================"<<endl;
	cout<<"Write your number ";
	cin>>o;
	o=sqrt(o);
	cout<<o<<endl;
	n=ceil(o);
	cout<<n<<endl;
	m=0; 
	for(int i=2; i<=n; i++)
	{
		if(n%i == 0)
		{
			m+=1;
		}
	}
	if(m==1)
	{
		cout<<"Prime Number"<<endl;
	}
	else
	{
		cout<<"Not a Prime Number"<<endl;
	}
return 0;
}

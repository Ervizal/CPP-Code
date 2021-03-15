#include <iostream>
using namespace std;

int main ()
{
	int color, size;
	float b,price;
	string B, C, x, y;
	cout<<"Choose the type of TV :"<<endl;
	cout<<"1. Black and White (B))"<<endl;
	cout<<"2. Colored (C)"<<endl;
	
	cout<<"Write the code"<<endl;
	cin>>color; cout<<endl;
	
	if(color == B)
	{
		cout<<("Insert selling price :")<<endl;
		cin>>b; cout<<endl;
		
		price = (b*0.92);
		
		cout<<("Harga jual =")<<price<<endl;
	}
	else if(color == C)
	{
		cout<<"Choose the size of TV :"<<endl;
		cout<<"1. 14 inches (x)"<<endl;
		cout<<"2. 21 inches (y)"<<endl;
		
		cout<<"Write the code :"<<endl;
		cin>>size; cout<<endl;
		
		if(size == x)
		{
			cout<<("Insert selling price :")<<endl;
			cin>>x; cout<<endl;
		
			price = (x*0.92);
		
			cout<<("Harga jual =")<<price<<endl;
		}
		else if(size == y)
		{
			cout<<("Insert selling price :")<<endl;
			cin>>x; cout<<endl;
		
			price = (x*0.80);
		
			cout<<("Harga jual =")<<price<<endl;	
		}
		else
		{
			cout<<"The command you entered is wrong"<<endl;
		}
	}
else
{
	cout<<"The command you entered is wrong"<<endl;
}
	
return 0;
}



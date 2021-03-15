#include <iostream>
using namespace std;
int main ()
{
	int n;
	cout<<" "<<endl;
	cin>>n;
	cout<<" "<<endl;
	for(int i=1, i<=n, i++)
	{
		for(int j=n-i, j>=2, j--)
		{
			cout<<" "<<endl;
		}
		for(int j=0 j<=i, i++)
		{
			cout<<"* "<<endl;
		}
		cout<<" "<<endl
	}
}

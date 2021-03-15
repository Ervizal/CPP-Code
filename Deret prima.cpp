#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		m=0;
		for(int j=1; j<=i; j++)
		{
			if (i%j == 0)
			{
				m+=1;
			}
		}
		if (m == 2)
		cout<<i<<" ";
	}
}

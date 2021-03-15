#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout<<"masukkan angka pertama"<<endl; cin>>a; cout<<endl;
	cout<<"masukkan angka kedua"<<endl; cin>>b; cout<<endl;
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<"angka pertama adalah"<<a<<endl;
	cout<<"angka kedua adalah"<<b<<endl;
return 0;
}

#include <iostream>
using namespace std;

int main(){
	int m, n;
	cout<<"Menampilkan Deret Bilangan Prima"<<endl;
	cout<<"Masukkan Bilangan"<<endl;
	cin>>n;
	cout<<endl;

	for(int i=1;i<=n;i++){
		m=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				m=m+1;
			}
		}
		if (m==2)
		cout<<i<<" ";
	}
}

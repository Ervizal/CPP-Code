#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
	int m, n, o, p;
	double k;
	k= 5/9;
	cout<<k<<endl;
	cout<<"============================="<<endl;
	cout<<"=== Program Konversi Suhu ==="<<endl;
	cout<<"============================="<<endl<<endl;
	cout<<"Pilih satuan suhu yang akan dikonversi"<<endl;
	cout<<"(Ketik angkanya)"<<endl;
	cout<<"1. Celcius"<<endl<<"2. Farenheit"<<endl<<"3. Reamur"<<endl<<"4. Kelvin"<<endl;
	cin>>m;
	if(m==1)
	{
		system("cls");
		cout<<"Dikonversi menjadi satuan apa?"<<endl;
		cout<<"1. Farenheit"<<endl<<"2. Reamur"<<endl<<"3. Kelvin"<<endl;
		cin>>n;
		if(n==1)
		{
			system("cls");
			cout<<"==Konversi suhu Celcius ke Farenheit=="<<endl;
			cout<<"Masukkan suhu dalam Celcius"<<endl;
			cin>>o;
			p= (1.8*o)+32;
			cout<<"Hasilnya adalah "<<p<<" Farenheit";
		}
		else if(n==2)
		{
			system("cls");
			cout<<"==Konversi suhu Celcius ke Reamur=="<<endl;
			cout<<"Masukkan suhu dalam Celcius"<<endl;
			cin>>o;
			p= ((0.8)*o);
			cout<<"Hasilnya adalah "<<p<<" Reamur";
		}	
		else if(n==3)
		{
			system("cls");
			cout<<"==Konversi suhu Celcius ke Kelvin=="<<endl;
			cout<<"Masukkan suhu dalam Celcius"<<endl;
			cin>>o;
			p= 273+o;
			cout<<"Hasilnya adalah "<<p<<" Kelvin";
		}
		else
		{
			system("cls");
			cout<<"Input salah"<<endl;
		}		
	}
	else if(m==2)
	{
		system("cls");
		cout<<"Dikonversi menjadi satuan apa?"<<endl;
		cout<<"1. Celcius"<<endl<<"2. Reamur"<<endl<<"3. Kelvin"<<endl;
		cin>>n;
		if(n==1)
		{
			system("cls");
			cout<<"==Konversi suhu Farenheit ke Celcius=="<<endl;
			cout<<"Masukkan suhu dalam Farenheit"<<endl;
			cin>>o;
			o-=32;
			k= 5/9;
			p= k*o;
			cout<<"Hasilnya adalah "<<p<<" Celcius";
		}
		else if(n==2)
		{
			system("cls");
			cout<<"==Konversi suhu Farenheit ke Reamur=="<<endl;
			cout<<"Masukkan suhu dalam Farenheit"<<endl;
			cin>>o;
			k=4/9;
			o-=32;
			p= k*o;
			cout<<"Hasilnya adalah "<<p<<" Reamur";
		}	
		else if(n==3)
		{
			system("cls");
			cout<<"==Konversi suhu Farenheit ke Kelvin=="<<endl;
			cout<<"Masukkan suhu dalam Farenheit"<<endl;
			cin>>o;
			p= 273+((5/9)*(o-32));
			cout<<"Hasilnya adalah "<<p<<" Kelvin";
		}
		else
		{
			system("cls");
			cout<<"Input salah"<<endl;
		}		
	}
	else if(m==3)
	{
		system("cls");
		cout<<"Dikonversi menjadi satuan apa?"<<endl;
		cout<<"1. Celcius"<<endl<<"2. Farenheit"<<endl<<"3. Kelvin"<<endl;
		cin>>n;
		if(n==1)
		{
			system("cls");
			cout<<"==Konversi suhu Reamur ke Celcius=="<<endl;
			cout<<"Masukkan suhu dalam Reamur"<<endl;
			cin>>o;
			p= ((5/4)*o);
			cout<<"Hasilnya adalah "<<p<<" Celcius";
		}
		else if(n==2)
		{
			system("cls");
			cout<<"==Konversi suhu Reamur ke Farenheit=="<<endl;
			cout<<"Masukkan suhu dalam Reamur"<<endl;
			cin>>o;
			p= ((9/4)*o)+32;
			cout<<"Hasilnya adalah "<<p<<" Farenheit";
		}	
		else if(n==3)
		{
			system("cls");
			cout<<"==Konversi suhu Reamur ke Kelvin=="<<endl;
			cout<<"Masukkan suhu dalam Reamur"<<endl;
			cin>>o;
			p= 273+((5/4)*o);
			cout<<"Hasilnya adalah "<<p<<" Kelvin";
		}
		else
		{
			system("cls");
			cout<<"Input salah"<<endl;
		}
	}
	else if(m==4)
	{
		system("cls");
		cout<<"Dikonversi menjadi satuan apa?"<<endl;
		cout<<"1. Celcius"<<endl<<"2. Farenheit"<<endl<<"3. Reamur"<<endl;
		cin>>n;
		if(n==1)
		{
			system("cls");
			cout<<"==Konversi suhu Kelvin ke Celcius=="<<endl;
			cout<<"Masukkan suhu dalam Kelvin"<<endl;
			cin>>o;
			p= o-273;
			cout<<"Hasilnya adalah "<<p<<" Celcius";
		}
		else if(n==2)
		{
			system("cls");
			cout<<"==Konversi suhu Kelvin ke Farenheit=="<<endl;
			cout<<"Masukkan suhu dalam Kelvin"<<endl;
			cin>>o;
			p= ((9/5)*(o-273))+32;
			cout<<"Hasilnya adalah "<<p<<" Farenheit";
		}	
		else if(n==3)
		{
			system("cls");
			cout<<"==Konversi suhu Kelvin ke Reamur=="<<endl;
			cout<<"Masukkan suhu dalam Kelvin"<<endl;
			cin>>o;
			o-=273;
			cout<<"Hasilnya adalah "<<(0.8*o)<<" Reamur";
		}
		else
		{
			system("cls");
			cout<<"Input salah"<<endl;
		}
	}
	else 
	{
		system("cls");
		cout<<"Input salah"<<endl;
	}
return 0;
}

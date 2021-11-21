//Mencari nilai maksimal dari n bilangan
	
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n,a,max;
	int *ptr_max;
	

	cout<<"\tProgram Nilai Maksimal dari N Bilangan"<<endl;

	cout<<"\n";
	
	cout<<"Jumlah Data Bilangan N : "; cin>>n;
	cout<<"=========================="<<endl;
	cout<<"\n";
	
	for (int i=1;i<=n;i++)
	{
		cout<<"Angka Data ke-"<<i<<" : "; cin>>a;
		
		
		if (i==1){
			max=a;
		}
		else if (max<a){
			max=a;
		}
		else {}
		
		ptr_max=&max;
		*ptr_max=max;
	}
	cout<<"=========================="<<endl;
	cout<<"\n";
	
	cout<<"Nilai Maksimal Bilangan N : "<<*ptr_max<<endl;
	
	getch();
}

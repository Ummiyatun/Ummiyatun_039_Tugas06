#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int nilai;
	char matkul[100], grade[100]="nilai mata kuliah";
	string grd;
	char *ptr_matkul, *ptr_grade;
	ptr_matkul=matkul;
	ptr_grade=grade;
	
	cout<<"\tNilai Mata Kuliah\n"<<endl;

	cout<<"Mata kuliah  : "; cin>>ptr_matkul;
	cout<<"Nilai mata kuliah : "; cin>>nilai;
	
	if(nilai>=90 && nilai<=100)
	{
			grd="A";
			
		} 
	else if (nilai>=80 && nilai<90)
	{
			grd="B";
			
		} 
	else if (nilai>=70 && nilai<80)
	{
			grd="C";
			
		} else if (nilai>=60 && nilai<70)
	{
			grd="D";
			
		} else if (nilai>=50 && nilai<60)
	{
			grd="E";
			
		}else if (nilai<50)
	{
			grd="anda tidak lulus";
			
		}else
	{
			grd=" nilai yang anda masukkan salah!!";
		}
	
	cout<<endl;
	cout<<"Nilai "<<matkul<<" = "<<nilai<<", "<<ptr_grade<<" = "<<grd<<endl;
}

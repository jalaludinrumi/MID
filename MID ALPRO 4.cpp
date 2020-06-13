#include<iostream>
#include<conio.h>
using namespace std;
struct data
    {
        char stambuk[50];
        int tugas;
        int kuis;
        int mid;
        int uas;
    };struct data mahasiswa[30];
void input (int y){
	int x;
	for(x=1;x<=y;x++)
	{
	cout<<endl;
	cout<<"Data Mahasiswake "<<x<<": ";
cout<<"\nStambuk : ";
cin>>mahasiswa[x].stambuk;
cout<<"Nilai Tugas    : ";
cin>>mahasiswa[x].tugas;
cout<<"Nilai Kuis    : ";
cin>>mahasiswa[x].kuis;
cout<<"Nilai Mid     : ";
cin>>mahasiswa[x].mid;
cout<<"Nilai UAS      : ";
cin>>mahasiswa[x].uas;
	}
	cout << endl;
	cout << "------------------------------------------------------------\n";
	cout << " No " << " \t " << " Stambuk " << " \t " << " Tugas " << " \t " << " Kuis " << " \t " << " UTS " << " \t " << " UAS " << " \t " << endl;
	cout << "------------------------------------------------------------\n"; 
}  
void tabel (int y)
{

	int x;
	for( x=1; x <= y; x++)
	{
	cout << x << " \t " << mahasiswa[x].stambuk << " \t " << mahasiswa[x].tugas << " \t " << mahasiswa[x].kuis << " \t " << mahasiswa[x].mid << " \t " << mahasiswa[x].uas << "\t ";

	cout << endl;
	}
	cout << endl;
}
int main ()
{
	int x,y;
	cout << " Stambuk Anda = 13020190263 " << endl;
	cout << " jumlah data =  ";
	cin >> y;
	input(y);
	tabel(y);
	return 0;
}

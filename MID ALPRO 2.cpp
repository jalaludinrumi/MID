#include <fstream>
#include<iostream>
using namespace std;
int main () 
{
char nama[50], kelas[10], stambuk[50];
int tugas, mid, kuis, uas;

ofstream database;
database.open (" berkasStambukAnda.txt ", ios::app);
cout << "Nama : " ;gets(nama);
cout << " Stambuk : ";cin >> stambuk;
cout << " kelas : " ;cin >> kelas;
cout << " Daftar nilai : ";
cout << " \nTugas : " ;cin >> tugas;
cout << " MID : " ;cin >> mid;
cout << " kuis : " ;cin >> kuis;
cout <<" UAS : " ;cin >> uas;
database << " Nama : " << nama;
database << " \nStambuk : " << stambuk;
database << " \nkelas : " << kelas;
database << " \nDaftarnilai : ";
database << " \nTugas : " << tugas;
database << " \nMID : " << mid;
database << " \nkuis : " << kuis;
database << " \nUAS : " << uas;
database.close();
return 0;
}

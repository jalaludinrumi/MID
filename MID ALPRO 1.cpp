#include<iostream>
#include<string.h>
using namespace std;

int main()
{
char a[50];
cout << " Teks: ";
cin.getline ( a,sizeof(a),'q' );
cout << " Jumlah karakter : " << cin.gcount()-1;
  return 0;
}

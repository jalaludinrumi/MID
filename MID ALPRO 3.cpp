#include <iostream>
using namespace std;

void tukar(int &a, int &b, int &c){
	int temp =c;
	c=b;
	b=a;
	a=temp;
}
int main(){
	int a, b, c;
	cout << " Angka : ";
	cin >> a;
	cin >> b;
	cin >> c; 
	tukar(a, b, c);
	cout << " \nHasilpenukaran : " << a << " " << b << " " << c;
	return 0;
}

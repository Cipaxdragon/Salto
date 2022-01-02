#include <iostream>

using namespace std;

const int potong = 5000;
const int kampung = 7000;

int main(){
	int x, y;
	int hasil;
	
	cout << "Jumlah ayam potong yang terjual: "; cin >> x;
	cout << "Jumlah ayam kampung yang terjual: "; cin >> y;
	
	hasil = (potong*x)+(kampung*y);
	cout << endl;
	cout << "Jumlah Total: "; cout << hasil;
	cout << endl;
	

	system("pause");	
}
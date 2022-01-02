#include <iostream>

using namespace std;

int main(){

	//variabel
	double x;
	double y;
	double hasil;

	const double harga2x1 = 400;

	cout << "Input Panjang (X) ==> ";
	cin >> x;

	cout << "Input Lebar   (Y) ==> ";
	cin >> y;

	hasil = (x * y) / (2 * 1);
	hasil = hasil * harga2x1;

	cout << "Harga Tanah "<< x << " x " << y << " adalah => "<< hasil  << " ribu "<< endl;
	
	
	system("pause");
}




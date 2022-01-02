#include <iostream>

using namespace std;

int main(){

	const float inflasi2persen = 0.02;

	float x;
	float y;

	cout << "=== Program Menghitung Prediksi Harga Jagung Di Masa Depan ===" << endl;

	//Harga
	cout << "Masukan Harga (Y) ==> ";
	cin >> y;

	//Tahun
	cout << "Masukan Tahun (X) ==> ";
	cin >> x;


	//proses
	for(int i = 1;i <= x;i++){
		y = y + (y * inflasi2persen);
		cout << "Tahun " << i << " : "<< y << endl; 
	}
	
	cout << "Hasil harga Setelah Kenaikan Inflasi 2% Selama "<< x << " tahun Ke Depan  adalah : " << endl;
	cout << "====> "  << y << endl;

	system("pause");
}

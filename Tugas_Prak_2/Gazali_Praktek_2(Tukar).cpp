#include <iostream>

using namespace std;

int main(){

//Variable Pertama
	float jarak; //Jarak Rumah Ke kampus
//Variable Kedua
	float nim; //2 digit terkahir dari nim
//varible kosong untuk tumbal
	float kosong;
//Judul
	cout << "==== Program Tukar Variable ====" << endl;


//Jarak Rumah Ke Kampus
	cout << "Masukan jarak rumah ke kampus" << endl;
	cout << "====> ";
	cin >> jarak;
//2 digit terakhir dari nim anda
	cout << "Masukan 2 digit terakhir dari nim anda" << endl;
	cout << "====> ";
	cin >> nim;

	cout << "\n";

//output hasil
	cout << "===== Hasil =====" << endl;
	cout << "Nilai Variabel pertama ==> " << jarak << endl;
	cout << "Nilai Variabel Kedua   ==> " << nim << endl;
	cout << "\n";
//Penugasan Tukar Nilau
	kosong = jarak;
	jarak = nim;
	nim = kosong;
//hasil setelah tertukar
	cout << "==== Hasil Setelah Tertukar =====" << endl;
	cout << "Nilai Variabel pertama ==> " << jarak << endl;
	cout << "Nilai Variabel Kedua   ==> " << nim << endl;
	cout << "\n";
	

	return 0;
}
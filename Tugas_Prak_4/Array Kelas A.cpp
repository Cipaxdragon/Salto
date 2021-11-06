#include <iostream>

using namespace std;

int main(){

	int x = 0;// variabel array

	//Variabel data
	int noreg[6];
	string nama[6];
	char bahasa[6];
	int nilai[6];
	cout << "=== Data ===" << endl;


//Orang Pertama
	cout << "=== Peserta Pertama === " << endl;

	cout << "No registrasi\t => ";
	cin >> noreg[x];

	cout << "Nama Peserta\t => ";
	cin >> nama[x];

	cout << "Bahasa Pemrograman\t => ";
	cin >> bahasa [x];

	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];

	
//Orang Kedua
	x++; // x = 1
	cout << "=== Peserta Kedua === " << endl;

	cout << "No registrasi\t => ";
	cin >> noreg[x];

	cout << "Nama Peserta\t => ";
	cin >> nama[x];

	cout << "Bahasa Pemrograman\t => ";
	cin >> bahasa [x];

	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];


	cout << endl;
	cout << nama[0] << nama[1];

//Orang 3
	x++; // x = 2
	cout << "=== Peserta Ketiga === " << endl;

	cout << "No registrasi\t => ";
	cin >> noreg[x];

	cout << "Nama Peserta\t => ";
	cin >> nama[x];

	cout << "Bahasa Pemrograman\t => ";
	cin >> bahasa [x];

	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];

//Orang 4
	x++; // x = 3
	cout << "=== Peserta Keempat === " << endl;

	cout << "No registrasi\t => ";
	cin >> noreg[x];

	cout << "Nama Peserta\t => ";
	cin >> nama[x];

	cout << "Bahasa Pemrograman\t => ";
	cin >> bahasa [x];

	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];

//Orang 5
	x++; // x = 4
	cout << "=== Peserta Kelima === " << endl;

	cout << "No registrasi\t => ";
	cin >> noreg[x];

	cout << "Nama Peserta\t => ";
	cin >> nama[x];

	cout << "Bahasa Pemrograman\t => ";
	cin >> bahasa [x];

	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];

//Orang 6
	x++; // x = 5
	cout << "=== Peserta Keenam === " << endl;

	cout << "No registrasi\t => ";
	cin >> noreg[x];

	cout << "Nama Peserta\t => ";
	cin >> nama[x];

	cout << "Bahasa Pemrograman\t => ";
	cin >> bahasa [x];

	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];


//Proses


//Data Keluaran
	cout << "=== Data Keluaran ===" << endl;

	system("pause");
}
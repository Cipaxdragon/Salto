#include <iostream>

using namespace std;

int main(){

//Variabel
	string nama[2];
	char bah[2]; // bahasa pemrograman
	int nilai[2]; // 0 -> 100
	int noreg[2];

//Judul
cout << "== Program Mencari Nilai maksimum == \n\n" << endl;

//Data Masukan 
	cout << "=== Data Peserta 1 ===" << endl;

	cout << "No Registrasi\t:";
	cin >> noreg[0];

		//JIka inputan tidak 6 digit
		if(!(noreg[0] >= 100000 && noreg[0] <= 999999)){
			cout << "Inputan Max 6 digit" << endl;
			system ("pause");
			return 0;
		}

	cout << "Nama Peserta\t:";
	cin >> nama[0];

	cout << "Bahasa Pemrograman\t:";
	cin >> bah;

	cout << "Nilai Ujian \t:"; //0 - 100
	cin >> nilai[0];


	// cout << "=== Data Peserta 2 ===" << endl;

	// cout << "No Registrasi\t:";
	// cin >> noreg[1];

	// cout << "Nama Peserta\t:";
	// cin >> nama[1];

	// cout << "Bahasa Pemrograman\t:";
	// cin >> bah;

	// cout << "Nilai Ujian \t:"; //0 - 100
	// cin >> nilai[1];


//Seleksi Kelas
	string kelas1;
	if(bah[0] == 'B'){
		kelas1 = "Basic";
	}
	else if (bah[0] == 'P'){
		kelas1 = "Pascal";
	}
	else if (bah[0] == 'C'){
		kelas1 = "C++";
	}

//Data Keluaran

	cout << "=== Data Peserta ===" << endl;

	cout << "#Kelas Bahasa " << kelas1 << endl;
	cout << "Nama Peserta = " << nama[0] << endl; 
	cout << "Nomor Registrasi = " << noreg [0] << endl; 
	cout << "Nilai Ujiann = " << nilai[0] << endl;
	
	
	system("pause");

}
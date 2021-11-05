#include <iostream>

using namespace std;

int main(){

//Variabel
	string nama[2];
	char bah[2]; // bahasa pemrograman
	int nilai[2]; // 0 -> 100
	string noreg[2];

//Judul
cout << "== Program Mencari Nilai maksimum == \n\n" << endl;

//Data Masukan 

// #1
	cout << "=== Data Peserta 1 ===" << endl;

	cout << "No Registrasi\t:";
	cin >> noreg[0];


	//JIka inputan tidak 6 digit
		int i = noreg[0].size();
		if(!(i <= 6)){
			cout << "Inputan Max 6 digit" << endl;
			system ("pause");
			return 0;
		}

	cout << "Nama Peserta\t:";
	cin >> nama[0];

	cout << "Bahasa Pemrograman\t:";
	cin >> bah;
	// bah = toupper(bah[0]);

	cout << "Nilai Ujian \t:"; //0 - 100
	cin >> nilai[0];


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
	
//Program Nilai Maksimal 
	system("pause");
}
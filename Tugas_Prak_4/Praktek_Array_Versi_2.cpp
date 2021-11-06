#include <iostream>

using namespace std;

int main(){
	
	int x_51 = 0;
	int digit_51;
	char kelas_51;
	string nama_51[2];
	string noreg[2];
	string judul,akhir;
	int nilai_51[2];

	cout << "Pilih kelas Bahasa Pemrograman" << endl;
	cout << "1. Basic (B)" << endl;
	cout << "2. Pascal (P)" << endl;
	cout << "3. C++ (C)" << endl;


	cout << "[B/P/C]====> ";
	cin >> kelas_51;

	if(kelas_51 == 'B'){
		judul = "=== kelas Bahasa Basic ===";
		akhir = "nilai Ujian Tertinggi Di kelas basic = > ";


	}
	else	if(kelas_51 == 'P'){
		judul = "=== kelas Bahasa Pascal ===";
		akhir = "nilai Ujian Tertinggi Di kelas basic = > ";
	}
	else	if(kelas_51 == 'C'){
		judul = "=== kelas Bahasa C++ ===";
		akhir = "nilai Ujian Tertinggi Di kelas basic = > ";

	}

	cout << judul << endl;
	cout << "\n\n";
	cout << "=== Peserta 1 ===" << endl;
	cout << "nama peserta => ";
	cin >> nama_51[x_51];

	cout << "No Registrasi => ";

	cin >> noreg[x_51];
	digit_51 = noreg[x_51].size();

		if(!(digit_51 <= 6)){
			cout << "Maximal Nomor Registrasi Cuma 6 digit" << endl;
			return 0;
		}

	cout << "nilai Ujian => ";
	cin >> nilai_51[x_51];
		if(!(nilai_51[x_51] >= 0 and nilai_51[x_51] <= 100)){
		cout << "nilai cuma 0 - 100" << endl;
			return 0;	
		}
	cout << "\n\n";
	x_51++;
	cout << "=== Peserta 2 ===" << endl;
	cout << "nama peserta => ";
	cin >> nama_51[x_51];

	cout << "No Registrasi => ";
	cin >> noreg[x_51];

	digit_51 = noreg[x_51].size();
	if(!(digit_51 <= 6))
		{
			cout << "Maximal Nomor Registrasi Cuma 6 digit" << endl;
			return 0;
		}

	cout << "nilai Ujian => ";
	cin >> nilai_51[x_51];
		if(!(nilai_51[x_51] >= 0 and nilai_51[x_51] <= 100)){
		cout << "nilai cuma 0 - 100" << endl;
			return 0;	
		}

	x_51 = 0;
	cout << "\n\n";
	cout << "=== Hasil Data ====" << endl;
	cout << "=== Peserta Pertama ===" << endl;
	cout << "nama Peserta \t: " << nama_51[x_51] << endl;
	cout << "No Registrasi \t: " << noreg[x_51] << endl;
	cout << "nilai_51 Ujian  \t: " << nilai_51[x_51] << endl;
	cout << "\n\n";
	x_51++;
	cout << "=== Peserta Kedua ===" << endl;
	cout << "nama Peserta \t: " << nama_51[x_51] << endl;
	cout << "No Registrasi \t: " << noreg[x_51] << endl;
	cout << "nilai Ujian  \t: " << nilai_51[x_51] << endl;
	cout << "\n\n";

	if (nilai_51[0] > nilai_51[1]){
		cout << akhir << nama_51[0] << endl;
	}
	else {
		cout << akhir << nama_51[1] << endl;
	}

}

#include <iostream>

using namespace std;

int main(){
	
	int x = 0;
	int digit;
	char kelas;
	string nama[2];
	string noreg[2];
	int nilai[2];
	cout << "Pilih Kelas Bahasa Pemrograman" << endl;
	cout << "1. Basic (B)" << endl;
	cout << "2. Pascal (P)" << endl;
	cout << "3. C++ (C)" << endl;


	cout << "[B/P/C]====> ";
	cin >> kelas;
	kelas = toupper(kelas);

	if(kelas == 'B'){
		cout << "\n\n";
		cout << "=== Kelas Bahasa Basic ===" << endl;
		cout << "\n\n";
		cout << "=== Peserta 1 ===" << endl;
		cout << "Nama peserta => ";
		cin >> nama[x];

		cout << "No Registrasi => ";
		//Jika Tidak 6 Digit
		cin >> noreg[x];
		digit = noreg[x].size();

			if(!(digit <= 6)){
				cout << "Maximal Nomor Registrasi Cuma 6 digit" << endl;
				system("pause"); main();
			}

		cout << "Nilai Ujian =>";
		cin >> nilai[x];
			if(!(nilai[x] >= 0 and nilai[x] <= 100)){
			cout << "Nilai cuma 0 - 100" << endl;
				system("pause"); main();	
			}
		cout << "\n\n";
		x++;
		cout << "=== Peserta 2 ===" << endl;
		cout << "Nama peserta => ";
		cin >> nama[x];

		cout << "No Registrasi => ";
		cin >> noreg[x];
		//Jika Tidak 6 Digit
		digit = noreg[x].size();
		if(!(digit <= 6))
			{
				cout << "Maximal Nomor Registrasi Cuma 6 digit" << endl;
				system("pause"); main();
			}

		cout << "Nilai Ujian =>";
		cin >> nilai[x];
			if(!(nilai[x] >= 0 and nilai[x] <= 100)){
			cout << "Nilai cuma 0 - 100" << endl;
				system("pause"); main();	
			}

		x = 0;
		cout << "\n\n";
		cout << "=== Hasil Data ====" << endl;
		cout << "=== Peserta Pertama ===" << endl;
		cout << "Nama Peserta \t: " << nama[x] << endl;
		cout << "No Registrasi \t: " << noreg[x] << endl;
		cout << "Nilai Ujian  \t: " << nilai[x] << endl;
		cout << "\n\n";
		x++;
		cout << "=== Peserta Kedua ===" << endl;
		cout << "Nama Peserta \t: " << nama[x] << endl;
		cout << "No Registrasi \t: " << noreg[x] << endl;
		cout << "Nilai Ujian  \t: " << nilai[x] << endl;
		cout << "\n\n";

		if (nilai[0] > 1){
			cout << "Nilai Ujian Tertinggi Di kelas basic = >" << nama[0] << endl;
		}
		else {
			cout << "Nilai Ujian Tertinggi Di kelas basic = >" << nama[1] << endl;
		}

		system("pause");
		main();
	}

	else if(kelas == 'P'){
		cout << "\n\n";
		cout << "=== Kelas Bahasa Pascal ===" << endl;
		cout << "\n\n";
		cout << "=== Peserta 1 ===" << endl;
		cout << "Nama peserta => ";
		cin >> nama[x];

		cout << "No Registrasi => ";
		//Jika Tidak 6 Digit
		cin >> noreg[x];
		digit = noreg[x].size();

			if(!(digit <= 6)){
				cout << "Maximal Nomor Registrasi Cuma 6 digit" << endl;
				system("pause"); main();
			}

		cout << "Nilai Ujian =>";
		cin >> nilai[x];
			if(!(nilai[x] >= 0 and nilai[x] <= 100)){
			cout << "Nilai cuma 0 - 100" << endl;
				system("pause"); main();	
			}
		cout << "\n\n";
		x++;
		cout << "=== Peserta 2 ===" << endl;
		cout << "Nama peserta => ";
		cin >> nama[x];

		cout << "No Registrasi => ";
		cin >> noreg[x];
		//Jika Tidak 6 Digit
		digit = noreg[x].size();
		if(!(digit <= 6))
			{
				cout << "Maximal Nomor Registrasi Cuma 6 digit" << endl;
				system("pause"); main();
			}

		cout << "Nilai Ujian =>";
		cin >> nilai[x];
			if(!(nilai[x] >= 0 and nilai[x] <= 100)){
			cout << "Nilai cuma 0 - 100" << endl;
				system("pause"); main();	
			}

		x = 0;
		cout << "\n\n";
		cout << "=== Hasil Data ====" << endl;
		cout << "=== Peserta Pertama ===" << endl;
		cout << "Nama Peserta \t: " << nama[x] << endl;
		cout << "No Registrasi \t: " << noreg[x] << endl;
		cout << "Nilai Ujian  \t: " << nilai[x] << endl;
		cout << "\n\n";
		x++;
		cout << "=== Peserta Kedua ===" << endl;
		cout << "Nama Peserta \t: " << nama[x] << endl;
		cout << "No Registrasi \t: " << noreg[x] << endl;
		cout << "Nilai Ujian  \t: " << nilai[x] << endl;
		cout << "\n\n";

		if (nilai[0] > 1){
			cout << "Nilai Ujian Tertinggi Di kelas Pascal = >" << nama[0] << endl;
		}
		else {
			cout << "Nilai Ujian Tertinggi Di kelas Pascal = >" << nama[1] << endl;
		}

		system("pause");
		main();
	}
	else if(kelas == 'C'){
		cout << "\n\n";
		cout << "=== Kelas Bahasa C++ ===" << endl;
		cout << "\n\n";
		cout << "=== Peserta 1 ===" << endl;
		cout << "Nama peserta => ";
		cin >> nama[x];

		cout << "No Registrasi => ";
		//Jika Tidak 6 Digit
		cin >> noreg[x];
		digit = noreg[x].size();

			if(!(digit <= 6)){
				cout << "Maximal Nomor Registrasi Cuma 6 digit" << endl;
				system("pause"); main();
			}

		cout << "Nilai Ujian =>";
		cin >> nilai[x];
			if(!(nilai[x] >= 0 and nilai[x] <= 100)){
			cout << "Nilai cuma 0 - 100" << endl;
				system("pause"); main();	
			}
		cout << "\n\n";
		x++;
		cout << "=== Peserta 2 ===" << endl;
		cout << "Nama peserta => ";
		cin >> nama[x];

		cout << "No Registrasi => ";
		cin >> noreg[x];
		//Jika Tidak 6 Digit
		digit = noreg[x].size();
		if(!(digit <= 6))
			{
				cout << "Maximal Nomor Registrasi Cuma 6 digit" << endl;
				system("pause"); main();
			}

		cout << "Nilai Ujian =>";
		cin >> nilai[x];
			if(!(nilai[x] >= 0 and nilai[x] <= 100)){
			cout << "Nilai cuma 0 - 100" << endl;
				system("pause"); main();	
			}

		x = 0;
		cout << "\n\n";
		cout << "=== Hasil Data ====" << endl;
		cout << "=== Peserta Pertama ===" << endl;
		cout << "Nama Peserta \t: " << nama[x] << endl;
		cout << "No Registrasi \t: " << noreg[x] << endl;
		cout << "Nilai Ujian  \t: " << nilai[x] << endl;
		cout << "\n\n";
		x++;
		cout << "=== Peserta Kedua ===" << endl;
		cout << "Nama Peserta \t: " << nama[x] << endl;
		cout << "No Registrasi \t: " << noreg[x] << endl;
		cout << "Nilai Ujian  \t: " << nilai[x] << endl;
		cout << "\n\n";

		if (nilai[0] > 1){
			cout << "Nilai Ujian Tertinggi Di kelas C++ = >" << nama[0] << endl;
		}
		else {
			cout << "Nilai Ujian Tertinggi Di kelas C++ = >" << nama[1] << endl;
		}

		system("pause");
		main();
	}
	system("pause");
}
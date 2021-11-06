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
	bahasa[x] = toupper(bahasa[x]);

	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];

	cout << "\n\n";	
//Orang Kedua
	x++; // x = 1
	cout << "=== Peserta Kedua === " << endl;

	cout << "No registrasi\t => ";
	cin >> noreg[x];

	cout << "Nama Peserta\t => ";
	cin >> nama[x];

	cout << "Bahasa Pemrograman\t => ";
	cin >> bahasa [x];
	bahasa[x] = toupper(bahasa[x]);
	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];

	cout << "\n\n";

//Orang 3
	x++; // x = 2
	cout << "=== Peserta Ketiga === " << endl;

	cout << "No registrasi\t => ";
	cin >> noreg[x];

	cout << "Nama Peserta\t => ";
	cin >> nama[x];

	cout << "Bahasa Pemrograman\t => ";
	cin >> bahasa [x];
	bahasa[x] = toupper(bahasa[x]);
	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];
	cout << "\n\n";
//Orang 4
	x++; // x = 3
	cout << "=== Peserta Keempat === " << endl;

	cout << "No registrasi\t => ";
	cin >> noreg[x];

	cout << "Nama Peserta\t => ";
	cin >> nama[x];

	cout << "Bahasa Pemrograman\t => ";
	cin >> bahasa [x];
	bahasa[x] = toupper(bahasa[x]);
	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];
	cout << "\n\n";
//Orang 5
	x++; // x = 4
	cout << "=== Peserta Kelima === " << endl;

	cout << "No registrasi\t => ";
	cin >> noreg[x];

	cout << "Nama Peserta\t => ";
	cin >> nama[x];

	cout << "Bahasa Pemrograman\t => ";
	cin >> bahasa [x];
	bahasa[x] = toupper(bahasa[x]);
	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];
	cout << "\n\n";
//Orang 6
	x++; // x = 5
	cout << "=== Peserta Keenam === " << endl;

	cout << "No registrasi\t => ";
	cin >> noreg[x];

	cout << "Nama Peserta\t => ";
	cin >> nama[x];

	cout << "Bahasa Pemrograman\t => ";
	cin >> bahasa [x];
	bahasa[x] = toupper(bahasa[x]);
	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];

	cout << "\n\n";
//Proses
	string pb[6];
	int nilbasic[6];
	int nilpas[6];
	int nilce[6];
	x = 0;
	string pesb[6];// = peserta basic
	string pesp[6];// = peserta pascal
	string pesc[6];// = peserta c++

//Peserta 1
	if(bahasa[x] == 'B'){
		pb[x] = "Basic";
		nilbasic[x] = nilai[x];
		pesb[x] = nama[x];
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
		nilpas[x] = nilai[x];
		pesp[x] = nama[x];
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
		nilce[x] = nilai[x];
		pesc[x] = nama[x];
	}


//Peserta 2
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basic";
		nilbasic[x] = nilai[x];
		pesb[x] = nama[x];
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
		nilpas[x] = nilai[x];
		pesp[x] = nama[x];
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
		nilce[x] = nilai[x];
		pesc[x] = nama[x];
	}

//Peserta 3
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basic";
		nilbasic[x] = nilai[x];
		pesb[x] = nama[x];
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
		nilpas[x] = nilai[x];
		pesp[x] = nama[x];
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
		nilce[x] = nilai[x];
		pesc[x] = nama[x];
	}



//Peserta 4
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basic";
		nilbasic[x] = nilai[x];
		pesb[x] = nama[x];
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
		nilpas[x] = nilai[x];
		pesp[x] = nama[x];
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
		nilce[x] = nilai[x];
		pesc[x] = nama[x];
	}



//Peserta 5
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basic";
		nilbasic[x] = nilai[x];
		pesb[x] = nama[x];
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
		nilpas[x] = nilai[x];
		pesp[x] = nama[x];
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
		nilce[x] = nilai[x];
		pesc[x] = nama[x];
	}



//Peserta 6
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basic";
		nilbasic[x] = nilai[x];
		pesb[x] = nama[x];
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
		nilpas[x] = nilai[x];
		pesp[x] = nama[x];
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
		nilce[x] = nilai[x];
		pesc[x] = nama[x];
	}




//Data Keluaran
	x = 0;
	cout << "=== Data Keluaran ===" << endl;

// Peserta 1
	cout << "=== Peserta Pertamma ===" << endl;
	cout << "Nama Peserta\t\t = " << nama[x] << endl;
	cout << "Nomor Registrasi\t = " << noreg[x] << endl;
	cout << "Bahasa Pemrograman\t = " << pb[x] << endl;
	cout << "Nilai Ujian\t\t = " << nilai[x] << endl;

	cout << "\n\n";
//Peserta 2
	x++;
	cout << "=== Peserta Kedua ===" << endl;
	cout << "Nama Peserta\t\t = " << nama[x] << endl;
	cout << "Nomor Registrasi\t = " << noreg[x] << endl;
	cout << "Bahasa Pemrograman\t = " << pb[x] << endl;
	cout << "Nilai Ujian\t\t = " << nilai[x] << endl;
	cout << "\n\n";

//Peserta 3
	x++;
	cout << "=== Peserta Ketiga ===" << endl;
	cout << "Nama Peserta\t\t = " << nama[x] << endl;
	cout << "Nomor Registrasi\t = " << noreg[x] << endl;
	cout << "Bahasa Pemrograman\t = " << pb[x] << endl;
	cout << "Nilai Ujian\t\t = " << nilai[x] << endl;
	cout << "\n\n";

//Peserta 4
	x++;
	cout << "=== Peserta Keempat ===" << endl;
	cout << "Nama Peserta\t\t = " << nama[x] << endl;
	cout << "Nomor Registrasi\t = " << noreg[x] << endl;
	cout << "Bahasa Pemrograman\t = " << pb[x] << endl;
	cout << "Nilai Ujian\t\t = " << nilai[x] << endl;
	cout << "\n\n";

//Peserta 5
	x++;
	cout << "=== Peserta Kelima ===" << endl;
	cout << "Nama Peserta\t\t = " << nama[x] << endl;
	cout << "Nomor Registrasi\t = " << noreg[x] << endl;
	cout << "Bahasa Pemrograman\t = " << pb[x] << endl;
	cout << "Nilai Ujian\t\t = " << nilai[x] << endl;
	cout << "\n\n";

//Peserta 6
	x++;
	cout << "=== Peserta Keenam ===" << endl;
	cout << "Nama Peserta\t\t = " << nama[x] << endl;
	cout << "Nomor Registrasi\t = " << noreg[x] << endl;
	cout << "Bahasa Pemrograman\t = " << pb[x] << endl;
	cout << "Nilai Ujian\t\t = " << nilai[x] << endl;
	cout << "\n\n";



//Data Peserta Maksimal

// Basic
	x = 0;
	if(nilbasic[0] > nilbasic[1]){
		cout << "Nilai peserta tertinggi di kelas Basic = " << pesb[0] << endl;
	}
	else{
		cout << "Nilai peserta tertinggi di kelas Basic = " << pesb[1] << endl;
	}
//Pascal
	if(nilpas[2] > nilpas[3]){
		cout << "Nilai peserta tertinggi di kelas Pascal = " << pesp[2] << endl;
	}
	else{
		cout << "Nilai peserta tertinggi di kelas Pascal = " << pesp[3] << endl;
	}

//C++
	if(nilce[4] > nilce[5]){
		cout << "Nilai peserta tertinggi di kelas C++ = " << pesc[4] << endl;
	}
	else{
		cout << "Nilai peserta tertinggi di kelas C++ = " << pesc[5] << endl;
	}
	
//Penutup
	system("pause");
}
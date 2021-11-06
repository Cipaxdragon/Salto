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

	cout << "Nilai Ujian\t => ";
	cin >> nilai[x];

	cout << "\n\n";

// //Orang 3
// 	x++; // x = 2
// 	cout << "=== Peserta Ketiga === " << endl;

// 	cout << "No registrasi\t => ";
// 	cin >> noreg[x];

// 	cout << "Nama Peserta\t => ";
// 	cin >> nama[x];

// 	cout << "Bahasa Pemrograman\t => ";
// 	cin >> bahasa [x];

// 	cout << "Nilai Ujian\t => ";
// 	cin >> nilai[x];

// //Orang 4
// 	x++; // x = 3
// 	cout << "=== Peserta Keempat === " << endl;

// 	cout << "No registrasi\t => ";
// 	cin >> noreg[x];

// 	cout << "Nama Peserta\t => ";
// 	cin >> nama[x];

// 	cout << "Bahasa Pemrograman\t => ";
// 	cin >> bahasa [x];

// 	cout << "Nilai Ujian\t => ";
// 	cin >> nilai[x];

// //Orang 5
// 	x++; // x = 4
// 	cout << "=== Peserta Kelima === " << endl;

// 	cout << "No registrasi\t => ";
// 	cin >> noreg[x];

// 	cout << "Nama Peserta\t => ";
// 	cin >> nama[x];

// 	cout << "Bahasa Pemrograman\t => ";
// 	cin >> bahasa [x];

// 	cout << "Nilai Ujian\t => ";
// 	cin >> nilai[x];

// //Orang 6
// 	x++; // x = 5
// 	cout << "=== Peserta Keenam === " << endl;

// 	cout << "No registrasi\t => ";
// 	cin >> noreg[x];

// 	cout << "Nama Peserta\t => ";
// 	cin >> nama[x];

// 	cout << "Bahasa Pemrograman\t => ";
// 	cin >> bahasa [x];

// 	cout << "Nilai Ujian\t => ";
// 	cin >> nilai[x];


//Proses
	string pb[6];//Peserta bahasa pemrograman
	int nilbasic[6];
	int nilpas[6];
	int nilce[6];
	x = 0;
//Peserta 1
	if(bahasa[x] == 'B'){
		pb[x] = "Basis";
		nilbasic[x] = nilai[x];
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
		nilpas[x] = nilai[x];
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
		nilce[x] = nilai[x];
	}


//Peserta 2
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basis";
		nilbasic[x] = nilai[x];
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
		nilpas[x] = nilai[x];
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
		nilce[x] = nilai[x];
	}
	

//Peserta 3
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basis";
		nilbasic[x] = nilai[x];
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
		nilpas[x] = nilai[x];
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
		nilce[x] = nilai[x];
	}
	
	
//Peserta 4
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basis";
		nilbasic[x] = nilai[x];
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
		nilpas[x] = nilai[x];
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
		nilce[x] = nilai[x];
	}
	
	
//Peserta 5
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basis";
		nilbasic[x] = nilai[x];
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
		nilpas[x] = nilai[x];
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
		nilce[x] = nilai[x];
	}
	
	
//Peserta 6
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basis";
		nilbasic[x] = nilai[x];
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
		nilpas[x] = nilai[x];
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
		nilce[x] = nilai[x];
	}
	
	


//Data Keluaran
	x = 0;
	cout << "=== Data Keluaran ===" << endl;

// Peserta Pertama
	cout << "=== Peserta Pertamma ===" << endl;
	cout << "Nama Peserta\t = " << nama[x] << endl;
	cout << "Nomor Registrasi\t = " << noreg[x] << endl;
	cout << "Bahasa Pemrograman\t = " << pb[x] << endl;
	cout << "Nilai Ujian\t = " << noreg[x] << endl;

	cout << "\n\n";
//Peserta Kedua
	x++;
	cout << "=== Peserta Kedua ===" << endl;
	cout << "Nama Peserta\t = " << nama[x] << endl;
	cout << "Nomor Registrasi\t = " << noreg[x] << endl;
	cout << "Bahasa Pemrograman\t = " << pb[x] << endl;
	cout << "Nilai Ujian\t = " << noreg[x] << endl;
	cout << "\n\n";


//Data Peserta Maksimal

// Basic
	x = 0;
	if(nilbasic[0] > nilbasic[1]){
		cout << "Nilai "
	}
//Penutup
	system("pause");
}
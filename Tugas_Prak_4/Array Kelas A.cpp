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
	string pb[6];//Peserta bahasa pemrograman
	x = 0;
//Peserta 1
	if(bahasa[x] == 'B'){
		pb[x] = "Basis";
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
	}
//Peserta 2
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basis";
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
	}

//Peserta 3
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basis";
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
	}
//Peserta 4
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basis";
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
	}

//Peserta 5
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basis";
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
	}
//Peserta 6
	x++;
	if(bahasa[x] == 'B'){
		pb[x] = "Basis";
	}

	else if(bahasa[x] == 'P'){
		pb[x] = "Pascal";
	}
	else if(bahasa[x] == 'C'){
		pb[x] = "C++";
	}


//Data Keluaran
	x = 0;
	cout << "=== Data Keluaran ===" << endl;

// Peserta Pertama
	cout << "=== Peserta Pertamma ===" << endl;
	cout << "Nama\t = " << nama[x];
	cout << "\t = " << nama[x];

	system("pause");
}
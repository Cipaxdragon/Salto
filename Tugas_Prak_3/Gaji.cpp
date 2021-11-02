#include <iostream>

using namespace std;

int main(){
	cout << "---- Menghitung Gaji Karyawan ----" << endl;
	string nama,nik,gender;
	int total;
	int gaji,gajianak;
	int jumlahanak;
	int status;
	char kelamin;

	cout << "Nama = ";cin  >> nama;
	cout << "NIK = ";cin >> nik;
	cout << "Jenis Kelamin[L/P] = "; cin >> kelamin;


	if(kelamin == 'L'){
		gender = "Laki-Laki";
		cout << "1. Duda" << endl;
		cout << "2. Beristri" << endl;
		cout << "Masukan Status = ";
		cin >> status;

		if(status == 1){
			gaji = 1000000;

		}
		else if (status == 2){
			gaji = 1500000;
			cout << "Masukan Jumlah Anak = "; cin >> jumlahanak;
		}
	}

	else if(kelamin == 'P') {
		gender = "Perempuan";
		cout << "1. Janda" << endl;
		cout << "2. Bersuami" << endl;
		cout << "Masukan Status = ";
		cin >> status;

		if(status == 1){
			gaji = 1000000;
		}
		else if (status == 2){
			gaji = 1500000;
				cout << "Masukan Jumlah Anak = "; cin >> jumlahanak;
		} 
	}



	gajianak = 200000 * jumlahanak;


	cout << "\n\n";
	
	total = gaji + gajianak;
	cout << "---- Data Gaji ----" << endl;
	cout << "Nama\t: " << nama << endl;
	cout << "NIK\t: " << nik << endl;
	cout << "Jenis Kelamin\t: " << gender << endl;
	cout << "Total Gaji\t: " << total << endl;


}



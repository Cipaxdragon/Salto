#include <iostream>

using namespace std;

int main(){
	//Variabel
	string nama_64[2],alamat_64[2];
	int golongan_64[2];
	int status_64;
	string sstatus_64[2];
	int gaji[2],gajianak_64[2];
	int totalgaji[2];
	int anak_64[2];
	int x = 0;

	//Orang Satu
	cout << "=== Inputan Orang  1 ===" << endl;
	cout << "Nama\t : "; cin >> nama_64[x];
	cout << "Alamat\t : "; cin >> alamat_64 [x];
	cout << "Golongan(1/2/3)\t : "; cin >> golongan_64[x];
	switch (golongan_64[x]){
		case 1:
			gaji[x] = 1000000;
			break;
		case 2 :
			gaji[x] = 1500000;
			break;
		case 3 :
			gaji[x] = 2000000;
			break;
	}
	cout << "1. Janda/Duda\n2. Bersuami/ beristri\n3. Lajang" << endl;
	cout << "Status            : "; cin >> status_64;
	switch (status_64){
		case 1 :
			sstatus_64[x] = "Janda/Duda";
			cout << "Jumlah Anak = "; cin >> anak_64[x];
			gajianak_64[x] = anak_64[x] * 200000;
			break;
		case 2 :
			sstatus_64[x] = "Bersuami/beristri";
		
			cout << "Jumlah Anak = "; cin >> anak_64[x];
			gajianak_64[x] = anak_64[x] * 200000;
			break;

		case 3 :
			sstatus_64[x] = "Lajang";
			gajianak_64[x] = 0;
			break;

	}

	totalgaji[x] = gaji[x] + gajianak_64[x];

	cout << endl;
	cout << "=== Data Keluaran ===" << endl;
	cout << "Nama          : " << nama_64[x] << endl;
	cout << "Alamat        : " << alamat_64[x] << endl;
	cout << "Status        : " << sstatus_64[x] << endl;
	cout << "Golongan      : " << golongan_64[x] << endl;
	cout << "Jumlah Gaji   : " << totalgaji[x] << endl;
	cout << endl;
	cout << endl;
	x++;
	
//Orang Dua
	cout << "=== Inputan Orang  2 ===" << endl;
	cout << "Nama              : "; cin >> nama_64[x];
	cout << "Alamat            : "; cin >> alamat_64 [x];
	cout << "Golongan(1/2/3)\t : "; cin >> golongan_64[x];
	switch (golongan_64[x]){
		case 1:
			gaji[x] = 1000000;
			break;
		case 2 :
			gaji[x] = 1500000;
			break;
		case 3 :
			gaji[x] = 2000000;
			break;
	}
	cout << "1. Janda/Duda\n2. Bersuami/ beristri\n3. Lajang" << endl;
	cout << "Status            : "; cin >> status_64;
	switch (status_64){
		case 1 :
			sstatus_64[x] = "Janda/Duda";
			cout << "Jumlah Anak = "; cin >> anak_64[x];
			gajianak_64[x] = anak_64[x] * 200000;
			break;
		case 2 :
			sstatus_64[x] = "Bersuami/beristri";
		
			cout << "Jumlah Anak = "; cin >> anak_64[x];
			gajianak_64[x] = anak_64[x] * 200000;
			break;

		case 3 :
			sstatus_64[x] = "Lajang";
			gajianak_64[x] = 0;
			break;

	}

	totalgaji[x] = gaji[x] + gajianak_64[x];

	cout << endl;
	cout << "=== Data Keluaran ===" << endl;
	cout << "Nama          : " << nama_64[x] << endl;
	cout << "Alamat        : " << alamat_64[x] << endl;
	cout << "Status        : " << sstatus_64[x] << endl;
	cout << "Golongan      : " << golongan_64[x] << endl;
	cout << "Jumlah Gaji   : " << totalgaji[x] << endl;
	cout << endl;
	x++;
	system("pause");
	
}


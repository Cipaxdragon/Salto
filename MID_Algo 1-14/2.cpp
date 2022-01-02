#include <iostream>

using namespace std;

int main(){
	//variabel
	const float diskon5persen = 0.05;

	//1
	string namabarang;
	int jumlahitem;
	int hargabarang;
	int totalharga;

	//2
	int potonganharga;
	int hargaakhir;


	cout << " ==== Program Menghitung Harga Barang Setelah Diskon ===" << endl;
	
	cout << "Masukan Nama Barang =>";
	cin >> namabarang;
	
	cout << "Masukan Harga Barang => ";
	cin >> hargabarang;

	cout << "Jumlah Item => ";
	cin >> jumlahitem;

	//proses
	totalharga = hargabarang * jumlahitem;

	//
	potonganharga = totalharga * diskon5persen;

	hargaakhir = totalharga - potonganharga;

	//hasiloutput
	cout << "Nama Barang   : " << namabarang << endl;
	cout << "Harga         : " << hargabarang << endl;
	cout << "Jumlah barang : " << jumlahitem << endl;
	cout << "Total harga   : " << totalharga << endl;
	cout << endl;
	cout << "Potongan Harga 5% : " << potonganharga << endl;
	cout << endl << endl;
	cout << "Harga Setelah Dikenakan Diskon : " << endl;
	cout << "====> "<< hargaakhir << endl;

	system("pause");
}




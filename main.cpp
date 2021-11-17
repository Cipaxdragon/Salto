#include <iostream>

using namespace std;

int main(){

	int y;
	int j;
	cout << "Masukan Jumlah Data : "; cin >> j;
	string nama[j];
	string nim[j];
	char kelas[j];
	for(int i = 0;i < j;i++){
		y = i + 1;
		cout << "Peserta " << y << endl;
		cout << "Masukan Nama "<< y <<" : "; cin.ignore();getline(cin,nama[i]);
		cout << "Masukan NIM "<< y <<"  : "; cin >> nim[i];
		cout << "Masukan Kelas "<< y << ": ";cin >> kelas[i];
	}
	
	cout << "==================" << endl;
	y = 0;
	for(int i = 0;i < j;i++){
		
		y = i + 1;
		cout << "Data Keluaran Peserta " << y << endl;
		cout << "Nama  "<< y <<"  : " << nama[i] << endl;
		cout << "NIM   "<< y <<"  : " << nim[i] << endl;
		cout << "Kelas "<< y <<"  : " << kelas[i] << endl;

	}
	cout << "==================" << endl;
	
		
}
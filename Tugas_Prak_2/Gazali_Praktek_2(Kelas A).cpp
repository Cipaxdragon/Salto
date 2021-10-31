#include <iostream>

using namespace std;

int main()
{
	//Variabel
	string nama, nim;
	float jarak;
	char kelas;
	int matkul;//jumlah matkul

	//Judul
	cout << "====> Tugas <====" << endl;
	cout << "\n";

	//Nama
	cout << "Masukan Nama" << endl;
	cout << "====> ";
	getline(cin, nama);

	cout << "\n";

	//nim
	cout << "Masukan NIM" << endl;
	cout << "====> ";
	cin >> nim;
	cout << "\n";
	//nim
	cout << "Kelas Berapa" << endl;
	cout << "====> ";
	cin >> kelas;
	cout << "\n";

	//Jumlah Matkul
	cout << "Masukan Jumlah Matkul" << endl;
	cout << "====> ";
	cin >> matkul;

	cout << "\n";	
	//Jarak
	cout << "Masukan Jarak dari rumah ke kampus" << endl;
	cout << "====> ";
	cin >> jarak;

	//Hasil Output
	cout << "\n\n";
	cout <<"===== Hasil Data =====\n" << endl;
	cout <<"=> Nama               : " << nama << endl;
	cout <<"=> Kelas              : Sistem Informasi "<< kelas << endl;
	cout <<"=> NIM                : "<< nim << endl;
	cout <<"=> Jarak              : "<< jarak << " km " <<endl;
	cout <<"=> Jumlah Mata Kuliah : "<< matkul << " Mata Kuliah " << endl;

	//Kalimat
	cout << "\n";
	cout << "Jadi Nama Kamu " << nama << " dengan nim "<< nim << endl <<"kuliah di UIN Alauddin Makasar jurusan " << kelas << " dengan jarak dari rumah ke kampus "<< endl << jarak << " km " << " dan jumlah mata kuliahmu "<< matkul << endl;
	return 0;
}


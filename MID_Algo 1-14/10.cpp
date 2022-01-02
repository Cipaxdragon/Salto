#include <iostream>

using namespace std;

int main(){
	
	const int pekerja50 = 50;

	int lamapekerjaan;
	int x;
	int ongkos;
	int pekerjaper50;

	cout << "Masukan Jumlah Pekerja (X) => ";
	cin >> x;

	pekerjaper50 = x / pekerja50;
	lamapekerjaan = 3 - (x / 50) ;
	ongkos = pekerjaper50 * 100;

	if(x == 50){
		ongkos = 100;
		lamapekerjaan = 2;
	}
	
	cout << endl;
	cout << "Ongkos         : " << ongkos << " Juta" << endl;
	cout << "Lama Pekerjaan : " << lamapekerjaan << " Minggu " << endl;


	system("pause");	
}



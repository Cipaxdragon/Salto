#include <iostream>

using namespace std;

float kehadiran();

//varibel global;
string nama[100];
int hadir[100];
int tugas[100];
int mid[100];
int laporan[100];
int final[100];
int j; // jumlah mahasiswa




int main(){
	
	cout << "== Nilai Akhir Mahasiswa ==" << endl;
	cout << endl << endl;
	cout << "Jumlah Mahasiswa : ";
	cin >> j;

	cout << endl;

	for(int i = 0;i < j;i++){
		cout << "Mahasiswa " << i + 1 << endl;
		cout << "Masukan Nama Mahasiswa  => "; cin >> nama[i];
		cout << "Masukan Nilai Kehadiran => "; cin >> hadir[i];
		cout << "Masukan Nilai Tugas     => "; cin >> tugas[i];
		cout << "Masukan Nilai MID       => "; cin >> mid[i];
		cout << "Masukan Nilai Laporan   => "; cin >> laporan[i];
		cout << "Masukan Nilai Final     => "; cin >> final[i];
	}


	ketentuan();

	

	system("pause");
}


void ketentuan(){
	for(int i = 0;i < j;i++){
		
		hadir[i]     = hadir[i]    * 0.10;
		tugas[i]     = tugas[i]    * 0.10;
		mid[i]       = mid[i]      * 0.15;
		laporan[i]   = laporan[i]  * 0.40;
		final[i]     = final[i]    * 0.25;

	}

}




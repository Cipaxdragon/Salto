#include <iostream>

using namespace std;

//deklarasi function/prosedur
void ketentuan();
void nilaiakhir();



//varibel global;
string nama[100];
float hadir[100];
float tugas[100];
float mid[100];
float laporan[100];
float final[100];
float akhir[100];
char predikat[100];
int j; // jumlah mahasiswa




int main(){
	
	cout << "== Nilai Akhir Mahasiswa ==" << endl;
	cout << endl << endl;
	cout << "Jumlah Mahasiswa : ";
	cin >> j;

	cout << endl;

	for(int i = 0;i < j;i++){
		cout << "=== Mahasiswa " << i + 1 << " ===" << endl;
		cout << "Masukan Nama Mahasiswa  => "; cin >> nama[i];
		cout << "Masukan Nilai Kehadiran => "; cin >> hadir[i];
		cout << "Masukan Nilai Tugas     => "; cin >> tugas[i];
		cout << "Masukan Nilai MID       => "; cin >> mid[i];
		cout << "Masukan Nilai Laporan   => "; cin >> laporan[i];
		cout << "Masukan Nilai Final     => "; cin >> final[i];
		cout << endl;

	}


	ketentuan();

	cout << "=== Hasil Data ===" << endl;
	nilaiakhir();
	

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

int i;
void nilaiakhir(){
	for(int i = 0;i < j;i++){
		cout << "=== Mahasiswa " << i + 1 << " ===" << endl;
		cout << "Nama              : " << nama[i] << endl;
		akhir[i] = hadir[i] + tugas[i] + mid[i] + laporan[i] + final[i];
		cout << "Nilai Total/Akhir : " << akhir[i] << endl;


		if (akhir[i] >= 80 and akhir[i] <= 100){
			predikat[i] = 'A';
		}

		else if(akhir[i] >= 70 and akhir[i] <= 79){
			predikat[i] = 'B';

		}

		else if(akhir[i] >= 60 and akhir[i] <= 69){
			predikat[i] = 'C';

		}

		else if(akhir[i] >= 50 and akhir[i] <= 59){
			predikat[i] = 'D';

		}

		else if(akhir[i] >= 0 and akhir[i] <= 49){
			predikat[i] = 'E';

		}

		cout << "Predikat          : " << predikat[i] << endl;

	}
}







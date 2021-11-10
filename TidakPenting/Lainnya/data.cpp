#include <iostream>

using namespace std;

int main(){

	string nama,nim,kelas;
	float tugas,mid,final,jumlah;
	cout << "Nama \t: ";
	getline(cin,nama);
	cout << "nim \t: ";
	cin >> nim;
	cout << "kelas \t: ";
	cin.ignore();getline(cin,kelas);
	cout << endl;
	cout << "Nilai Tugas \t: ";
	cin >> tugas;
	tugas = tugas  * 0.25;
	cout << "Nilai MID \t: ";
	cin >> mid;
	mid = mid * 0.35;
	cout << "Nilai Final \t: ";
	cin >> final;
	final = final * 0.40;

	
	jumlah = tugas + mid + final;

	cout <<"\n\n";
	cout << "=== Hasil Data ===" << endl;

	cout << "Nama\t: "<< nama << endl;	
	cout << "NIM\t: "<< nim << endl;	
	cout << "Kelas\t: "<< kelas << endl;	
	cout << "Nilai Tugas\t: "<< tugas << endl;	
	cout << "Nilai MID\t: "<< mid << endl;	
	cout << "Nilai Final\t: "<< final << endl;	
	cout << "Nilai Total\t: "<< jumlah << endl;	



	if (jumlah >= 85 and jumlah <= 100){
		cout << "Nilaimu A" << endl;
	}

	else if (jumlah >= 70 and jumlah <= 84){
		cout << "Nilai B" << endl;
	}

	else if (jumlah >= 60 and jumlah <= 69){
		cout << "Nilai C" << endl;
	}

	else if (jumlah >= 50 and jumlah <= 59){
		cout << "Nilai D" << endl;
	}
		else if (jumlah >= 0 and jumlah <= 49){
		cout << "Nilai D" << endl;
	}
	else{
		
		cout << "Kesalahan input" << endl;
	}
	system("pause");
}

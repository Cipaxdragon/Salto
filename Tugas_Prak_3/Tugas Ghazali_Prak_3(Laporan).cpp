#include <iostream>

using namespace std;

int main(){
//variabel
	float luas64,a64,b64,t64;
	int menu64;
//Variabel Keliling
	int kel64,AB64,BC64,CD64,DA64;

//Judul	
	
	cout << "----------------------------------------" << endl;
	cout << "|                 MENU                 |" << endl;
	cout << "----------------------------------------" << endl;
	cout << "| 1 | Menghitung Luas Trapesium        |" << endl;
	cout << "| 2 | Menghitung Keliliing Trapesium   |" << endl;
	cout << "| 3 | Menghitung Tinggi Trapesium      |" << endl;
	cout << "----------------------------------------" << endl;
	
	cout << "[1/2/3] ===> "; cin >> menu64;
	
//Switch Case
	switch(menu64) {
	case 1 :
		cout << "\n==== Menghitung Luas Trapesium ====\n" << endl;
		cout << "Masukan Nilai a ==> "; cin >> a64;
		cout << "Masukan Nilai b ==> "; cin >> b64;
		cout << "Masukan Nilai t ==> "; cin >> t64;
		luas64 = 0.5 * (a64 + b64) * t64;
		cout << "1/2 X (" << a64 << " + " << b64 << ") x " << t64 << endl; 
		cout << "Luas Trapesiumnya adalah => " << luas64 << endl;
		cout << "\n\n";
		break;
	case 2 :
		cout << "\n==== Menghitung Keliling Trapesium ====\n" << endl;
		cout << "Masukan Nilai AB ==> "; cin >> AB64;
		cout << "Masukan Nilai BC ==> "; cin >> BC64;
		cout << "Masukan Nilai CD ==> "; cin >> CD64;
		cout << "Masukan Nilai DA ==> "; cin >> DA64;
		kel64 = AB64 + BC64 + CD64 + DA64;
		cout << AB64 << " + " << BC64 << " + " << CD64 << " + " << DA64 << endl;
		cout << "Keliling Trapesiumnya adalah => " << kel64 << endl;
		cout << "\n\n";
		break;
	case 3 :
		cout << "\n==== Menghitung Tinggi Trapesium ====\n" << endl;
		cout << "Masukan Nilai Luas Trapesium ==> "; cin >> luas64;
		cout << "Masukan Nilai a ==> "; cin >> a64;
		cout << "Masukan Nilai b ==> "; cin >> b64;
		t64 = (2 * luas64) / (a64 + b64);
		cout << " 2 x " << luas64 << endl;
		cout << "-----------" << endl;
		cout << " " <<a64 << " + " << b64 << endl;
		cout << "Tinggi Trapesiumnya adalah => " << t64 << endl;
		cout << "\n\n";
		break;	

	default :
		cout << "Program tidak terdaftar" << endl;
	}
	
	printf("Tekan Enter Untuk Coba Lagi.....");cin.ignore(); cin.get();
	system("cls");
	main();
}

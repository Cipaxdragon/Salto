#include <iostream>


using namespace std;

int main(){
	int Y; // jarak
	int selisih;
	int biayamotor;
	int biayamobil;

	const int biayajarakmotor = 50;
	const int biayajarakmobil = 100;
	
	cout << "=== Jawaban NO 8 === " << endl << endl;
	cout << "JARAK => KM ";
	cin >> Y;


//proses menghitung 
	//motord
	biayamotor = Y / biayajarakmotor;
	biayamotor = biayamotor * 8000;

	//mobil
	biayamobil = Y / biayajarakmobil;
	biayamobil = biayamobil * 8000;

	selisih = biayamotor - biayamobil;

	cout << "Biaya Motor = Rp" << biayamotor << endl;
	cout << "Biaya Mobil = Rp" << biayamobil << endl;;


	cout << "Selisih biaya = Rp " << selisih << endl;
	
	system("pause");
}
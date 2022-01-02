#include <iostream>

using namespace std;

int main(){


	int bmi;
	float tinggi;
	float berat;
	string kondisi;

	cout << "===== Program Menghitung BMI =====" << endl;

	cout << "Masukan Berat => ";
	cin >> berat;
	cout << endl;

	cout << "Masukan tinggi => ";
	cin >> tinggi;
	cout << endl;

	// cm ke m
	tinggi = tinggi / 100;


	//tinggi pangkat 2
	tinggi = tinggi * tinggi;

	bmi = berat / tinggi;

	cout << "Hasil BMI = " << bmi << endl;
	
	if(bmi < 18){
		kondisi = "Kurus";
	}

	else if(bmi >= 18 and bmi <= 24){
		kondisi = "Normal";
	}

	else if(bmi >= 25 and bmi <= 29){
		kondisi = "Kelebihan Berat Badan";
	}

	else if(bmi > 29){
		kondisi = "Obesitas";
	}
	
	cout << "kondisi = " << kondisi << endl;	
	
	system("pause");
}





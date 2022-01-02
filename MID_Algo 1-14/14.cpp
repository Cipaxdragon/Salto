#include <iostream>

using namespace std;

int main(){

	const int rupkedollar = 14000;
	const int rupkeyen = 120;

	int dollar;
	int yen;
	int rupiah;

	cout << "Masukan Jumlah Rupiah ==> ";
	cin >> rupiah;
	cout << endl;
	cout << "=== Hasil Konversi ===" << endl;

	//ke dollar
	dollar = rupiah / rupkedollar;
	yen = rupiah / rupkeyen;

	cout << rupiah << " Ke Dollar =  " << dollar << " dollar "<< endl;
	cout << rupiah << " Ke YEN    =  " << yen << " yen"<< endl;

	system("pause");
}




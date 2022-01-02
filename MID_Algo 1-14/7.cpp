#include <iostream>
using namespace std;
int main(){
	string hasil[2];
	cout << "== Pengecekan Bilangan Bulat dan Ganjil/Genap ==" << endl;
	int X;
	cout << "Input Nilai X ==> ";
	cin >> X;

	cout << endl;
	cout << "=== Hasil ====" << endl;

//pengecekan bilangan genap/ganjil
	if(X % 2 == 0 ){
		hasil[0] = "GENAP";
	}
	else{
		hasil[0] = "GANJIL";
	}
//pengecekan bilagan 
	
	if(X >= 0){
		hasil[1] = "POSITIF";
	}
	else{
		hasil[1] = "NEGATIF";
	}
	cout << "Bilangan X = " << X << " adalah bilangan " << hasil[1]<< " dan " << hasil[0] <<endl;
	system("pause");
	main();
}
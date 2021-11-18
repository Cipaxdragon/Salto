#include <iostream>

using namespace std;

int main(){

//Variabel
	int M = 18;
	int N = 40;

//Tugas Program Hijrah
	cout << "==== Tugas Hijrah ====" << endl;
	cout << endl;
	cout << "---- Bilangan Prima ---" << endl;
	int i = M;
	int faktor;
	int j;
	do{
		faktor = 0;
		j = 1;
		while(j <= M){
			if(M % j == 0){
				faktor++;
			}
			j++;
		}

		if(faktor == 2){
			cout << M << endl;
		}
        M++;
	}while (M <= N);

//Tugas Sulastri
	cout << "=== Tugas Sulastri =  ==" << endl;
	cout << "--- Bilangan Ganjil ---" << endl;
	M = 18;
	do {

		if( M % 2 == 1){
			cout << M << endl;
		}
		M++;
	}while(M <= N);

	cout << "--- Bilangan Genap ---" << endl;
	M = 18;
	do{

		if( M % 2 == 0){
			cout << M << endl;
		}
		M++;
	}while(M <= N);

//Tugas Joko
	cout << "=== Tugas Joko ===" << endl;
	cout << "---Kelipatan 3 --" << endl;
    M = 18;
	do{
		if(M % 3 == 0){
			cout << M << endl;
		}
        M++;
	}while(M <= N);


	cout << "---Kelipatan 7 --" << endl;
    M = 18;
	do{
		if(M % 7 == 0){
			cout << M << endl;
		}
        M++;
	}while(M <= N);
}
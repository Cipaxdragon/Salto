#include <iostream>

using namespace std;

int main(){

//Variabel
	int M = 18;
	int N = 40;
	int i;

//Tugas Program Hijrah
	cout << "==== Tugas Hijrah ====" << endl;
	cout << endl;
	cout << "---- Bilangan Prima ---" << endl;
	int f;
	while(M <= N){
		f = 0;
		i = 1;
		while(i <= M){
			if(M % i == 0){
				f++;
			}
			i++;
		}
		if(f == 2){
			cout << M << endl;
		}
		M++;
	}

//Tugas Sulastri
	cout << "=== Tugas Sulastri =  ==" << endl;
	cout << "--- Bilangan Ganjil ---" << endl;
	M = 18;
	while(M <= N){

		if( M % 2 == 1){
			cout << M << endl;
		}
		M++;
	}

	cout << "--- Bilangan Genap ---" << endl;
	M = 18;
	while(M <= N){

		if( M % 2 == 0){
			cout << M << endl;
		}
		M++;
	}

//Tugas Joko
	cout << "=== Tugas Joko ===" << endl;
	cout << "---Kelipatan 3 --" << endl;
    M = 18;
	while(M <= N){
		if(M % 3 == 0){
			cout << M << endl;
		}
        M++;
	}


	cout << "---Kelipatan 7 --" << endl;
    M = 18;
	while(M <= N){
		if(M % 7 == 0){
			cout << M << endl;
		}
        M++;
	}
}
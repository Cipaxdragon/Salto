#include <iostream>

using namespace std;

int main(){


	int M = 1;
	int N = 19+5;
	int i;

	cout << "================" << endl;
	cout << "|N = 1         |" << endl;
	cout << "|M = 24        |" << endl;
	cout << "================" << endl;
	cout << "\n\n";
	cout << "----Tugas Hijrah-----" << endl;
	cout << endl;
	cout << "Bilangan Prima :" << endl;
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
			cout << M << " ";
		}
		M++;
	}

cout << "\n\n";

	cout << "---- Tugas Sulastri ----" << endl;
	cout << "Bilangan Ganjil :" << endl;

	M = 1;
	while(M <= N){

		if( M % 2 == 1){
			cout << M << " ";

		}
		M++;
	}
	cout << "\n\n";
	cout << "--- Bilangan Genap ---" << endl;

	M = 1;
	while(M <= N){

		if( M % 2 == 0){
			cout << M << " ";
		}
		M++;
	}
	cout << "\n\n";


	cout << "--- Tugas Joko ---" << endl;
	cout << "Kelipatan 3 :" << endl;

    M = 1;
	while(M <= N){
		if(M % 3 == 0){
			cout << M << " ";
		}
        M++;
	}

	cout << "\n\n";
	cout << "Kelipatan 7 :" << endl;

    M = 1;
	while(M <= N){
		if(M % 7 == 0){
			cout << M << " ";
		}
        M++;
	}

}

#include <iostream>

using namespace std;

int main(){


	int M = 1;
	int N = 19+5;

	cout << "================" << endl;
	cout << "|N = 1         |" << endl;
	cout << "|M = 24        |" << endl;
	cout << "================" << endl;
	cout << "\n\n";
	cout << "----Tugas Hijrah-----" << endl;
	cout << endl;
	cout << "Bilangan Prima :" << endl;
	int faktor;
	for(int i = M;i <= N;i++){
		faktor = 0;
		for(int j = 1;j <= i;j++){
			if(i % j == 0){
				faktor++;
			}
		}
		if(faktor == 2){
			cout << i << " ";
		} 
	}

cout << "\n\n";

	cout << "---- Tugas Sulastri ----" << endl;
	cout << "Bilangan Ganjil :" << endl;

	for(int i = M;i <= N;i++){
		if( i % 2 == 1){
			cout << i << " ";
		}
	}
cout << "\n\n";

	cout << "Bilangan Genap :" << endl;
	for(int i = M;i <= N;i++){
		if( i % 2 == 0){
			cout << i << " ";
		}
	} 
cout << "\n\n";


	cout << "--- Tugas Joko ---" << endl;
	cout << "Kelipatan 3 :" << endl;

	for(int i = M;i <= N;i++){
		if(i % 3 == 0){
			cout << i << " ";
		}
	}
cout << "\n\n";
	cout << "Kelipatan 7 :" << endl;

	for(int i = M;i <= N;i++){
		if(i % 7 == 0){
			cout << i << " ";
		}
	}
}

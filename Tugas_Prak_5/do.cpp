#include <iostream>

using namespace std;

int main(){
//Judul
	cout << "===========" << endl;
	cout << "|NIM Genap|" << endl;
	cout << "|M = 18   |" << endl;	
	cout << "|N = 40   |" << endl;	
	cout << "===========" << endl << endl;
//Variabel
	int M = 18;
	int N = 40;
//Tugas Hijrah
	cout << "---- Tugas Hijrah ----\n" << endl;
	cout << "Bilangan Prima : " << endl << endl; 
	int habis; // variabel penghitung habis di bagi 0
	do{
		int j = 1;
		habis = 0;
		while(j <= M){
			if(M % j == 0) habis++;
			j++;
		}
		if(habis == 2) cout << M << " ";
		M++;
	}while(M <= N);

cout << endl << endl;
//Tugas Sulastri

	cout << "---- Tugas Sulastri ----\n" << endl;
	cout << "Bilangan Ganjil : " << endl << endl;
	M = 18;
	do{
		if(M % 2 == 1) cout << M << " ";
		M++;
	}while(M<=N);

	cout << endl << endl;

	cout << "Bilangan Genap : " << endl << endl;
	M = 18;
	do{
		if(M % 2 == 0) cout << M << " ";
		M++;
	}while(M<=N);
	
	cout << endl << endl;

	
//Tugas Joko
	cout << "---- Tugas Joko ----" << endl << endl;
	cout << "Kelipatan 3 : " << endl;
	M = 18;
	do{
		if(M % 3 == 0){
			cout << M << " ";
		}
		M++;
	}while(M <= N );
	cout << endl << endl;
	
	cout << "Kelipatan 7 : " << endl;
	M = 18;
	do{
		if(M % 7 == 0){
			cout << M << " ";
		}
		M++;
	}while(M <= N );
	cout << endl;
	system("pause");
}

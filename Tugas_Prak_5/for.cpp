#include <iostream>

using namespace std;

int main(){
//Judul
	cout << "===========" << endl;
	cout << "|NIM Genap|" << endl;
	cout << "|N = 18   |" << endl;	
	cout << "|M = 40   |" << endl;	
	cout << "===========" << endl << endl;
//Variabel

	int M = 18;
	int N = 40;

//Tugas Hijrah

	cout << "---- Tugas Hijrah ----\n" << endl;
	cout << "Bilangan Prima : " << endl << endl; 
	int habis; // variabel penghitung habis di bagi 0
	for(M;M <= N;M++)
	{
		habis = 0;
		for(int k = 1;k <= M;k++)
		{
			if(M % k == 0)
			{
				habis++;
			}
		}
		if(habis == 2)
		{
			cout << M << " ";
		}
	}
cout << endl << endl;
//Tugas Sulastri

	cout << "---- Tugas Sulastri ----\n" << endl;
	cout << "Bilangan Ganjil : " << endl << endl;
	for(M = 18;M <= N;M++){
		if(M % 2 == 1){
			cout << M << " ";
		}
	}

	cout << endl << endl;

	cout << "Bilangan Genap : " << endl << endl;
	for(M = 18;M <= N;M++){
		if(M % 2 == 0){
			cout << M << " ";
		}
	}

	cout << endl << endl;

	
//Tugas Joko
	cout << "---- Tugas Joko ----" << endl << endl;
	cout << "Kelipatan 3 : " << endl;
	for(M = 18;M <= N;M++){
		if(M % 3 == 0){
			cout << M << " ";
		}
	}
	cout << endl << endl;
	cout << "Kelipatan 7 : " << endl;
	for(M = 18;M <= N;M++){
		if(M % 7 == 0){
			cout << M << " ";
		}
	}



}
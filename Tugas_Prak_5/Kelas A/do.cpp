#include <iostream>

using namespace std;

int main(){

//Variabel
	int M = 18;
	int N = 18 + 5;

//Tugas Program Hijrah
	cout << "==== Tugas Hijrah ====" << endl;
	cout << endl;
	cout << "---- Bilangan Prima ---" << endl;
	int i = M;
	do{
		
		if(M==2 or M ==3){
        	cout << M << endl;
		}
        if( M % 2 != 0){
        	
        	if( M % 3 == 0 or M == 1){
        	
			}
			else{
				cout << M << endl;;
			}	
		}      
        M++;
        i++;
	}while (i <= N);

//Tugas Sulastri
	cout << "=== Tugas Sulastri =  ==" << endl;
	cout << "--- Bilangan Ganjil ---" << endl;
	M = 1;
	do {

		if( M % 2 == 1){
			cout << M << endl;
		}
		M++;
	}while(M <= N);

	cout << "--- Bilangan Genap ---" << endl;
	M = 1;
	do{

		if( M % 2 == 0){
			cout << M << endl;
		}
		M++;
	}while(M <= N);

//Tugas Joko
	cout << "=== Tugas Joko ===" << endl;
	cout << "---Kelipatan 3 --" << endl;
    M = 1;
	do{
		if(M % 3 == 0){
			cout << M << endl;
		}
        M++;
	}while(M <= N);


	cout << "---Kelipatan 7 --" << endl;
    M = 1;
	do{
		if(M % 7 == 0){
			cout << M << endl;
		}
        M++;
	}while(M <= N);
}
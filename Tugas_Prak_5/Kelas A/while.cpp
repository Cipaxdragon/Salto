#include <iostream>

using namespace std;

int main(){

//Variabel
	int M = 1;
	int N = 18 + 5;

//Tugas Program Hijrah
	cout << "==== Tugas Hijrah ====" << endl;
	cout << endl;
	cout << "---- Bilangan Prima ---" << endl;
	int i = M;
	while(i <= N){
	
		if(!(i % 2 == 0) or i == 2){
			if(i % i == 0 and i % 1 == 0){
				cout << i << endl;
			}
		}
        
		i++;
	}
}

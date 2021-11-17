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
	}
}
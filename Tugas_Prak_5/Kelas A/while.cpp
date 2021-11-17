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
	int j = M;
	int faktor;
	
	while(i <= N){
        faktor = 0;
		for(int j = M;j <= i;j++){
			if(i % j == 0){
				faktor++;
			}
		}
		
    	if(faktor == 2){
    		cout << i << endl;
    	}
		i++;
	}
}
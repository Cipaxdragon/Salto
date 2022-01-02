#include <iostream>

using namespace std;

int main(){

	cout << "==== 5 Bilangan Ganjil Kelipatan 17 ====" << endl;
	cout << "Yang Lebih Besar Dari 217 : " << endl;

	cout << endl;
	
	int i = 218; 
	int hitung = 0;

	while(hitung < 5){
		if(i % 17 == 0 and i % 2 == 1){
			cout << i << endl;
			hitung++;
		}
		i++;
	}
	cout << endl;
	system("pause");
}




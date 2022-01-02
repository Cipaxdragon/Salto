#include <iostream>

using namespace std;

int main(){

	cout << "=== Bilangan Ganjil Kelipatan 31 ===" << endl;
	cout << endl;
	for(int i = 20+1; i<4903; i++){
		if(i % 2 == 1 and i % 31 == 0){
			cout << i << endl;
		}
	}

	system("pause");
}




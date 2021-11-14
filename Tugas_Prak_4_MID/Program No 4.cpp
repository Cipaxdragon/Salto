#include <iostream>

using namespace std;

int main(){
	int x;
	cout << "Masukan  Bilangan = ";
	cin >> x;
	
	if(!(x % 2 == 0)){
		if (x % 1 == 0 and x % x == 0){
			cout << "Ini Bilangan Prima" << endl;
		}
	}
    
	else {
		cout << "Ini Bukan Bilangan Prima" << endl;
	}
}
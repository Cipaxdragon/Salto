#include <iostream>

using namespace std;

int main(){
	cout << "Deret Fibonacci" << endl;
	int a,b,c,por;
    c = 1;
    b = 1;
    a = 0;
	for(por = 1;por <= 10;por++){
        cout << c << " ";
        c = a + b;
        a = b;
        b = c;
       
	} 
}
#include <iostream>

using namespace std;

int main(){
	cout << "=== Kelipatan 3 dan 7 === " << endl;
	cout << "=== 114 - 1118 ====" << endl;
	int i = 113 + 1;
	do{
		if(i % 3 == 0 and i % 7 == 0){
			cout << i << endl;
		}
		i++;
	}while(i < 1119);

	system("pause");
}




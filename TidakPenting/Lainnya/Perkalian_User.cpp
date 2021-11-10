#include <iostream>

using namespace std;

void tipe1 (){

    int a,b,n;
	a = 0;
	int deret;
	b = 1;
	cout << "Mau Sampe Perkalian Berapa => ";
	cin >> n;
	
	cout << "\n\n";
	for(int j = 1;j <= n;j++){
		cout << "=== Perkalian " << b << " === "<< endl << endl;
    	for(int i = 1; i <= 10;i++){
    	a += b;
    	cout << b <<" x " << i << " \t= " << a << endl;	
    	}
    	b++;
    	a = 0;
    	cout << "\n";
    	
	}
}


void tipe2 (){
	int a,b,n;
	a = 0;
	int deret;
	cout << "Perkalian Berapa \t= ";
	cin >> b;
	cout << "Sampe Kali Berapa\t= ";
	cin >> n;

	
    for(int i = 1; i <= n;i++){
    	a += b;
    	cout << b <<" x " << i << " \t= " << a << endl;
    }
}

int main(){
	cout << "=== Perkalian ===" << endl;
	
	cout << "========= Menu ========" << endl;
	cout << "| 1 | Program Tipe 1  |" << endl;
	cout << "| 2 | Program Tipe 2  |" << endl;
	cout << "=======================" << endl;
	
	int pilih;
	lagi:
	cout << "\n\n[1/2]===> ";
	cin >> pilih;
	
	if (pilih == 1){
		tipe1();
	}
	else if (pilih == 2){
		tipe2();
	}
	else{
		cout << "Inputan cuma 1-2" << endl;
		goto lagi;
		
	}
	
	cout << "Try Again ?" << endl;
	
	lagi1:
	cout << "[Y/N] ===> ";
	char yn;
	cin >> yn;
	yn = toupper(yn);
	if (yn == 'Y'){
		system("cls");
		main();
	}
	else if (yn == 'N'){
		cout << "Ok sampai Jumpa " << endl;
		system("pause");
		return 0;
	}
	else {
		cout << "Input Yang Bener Bro" << endl;
		goto lagi1;
	}
}
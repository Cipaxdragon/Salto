#include <iostream>

using namespace std;

int main(){

	bool flu;
	bool tenggorokan;
	bool batuk;

	char yn;

	cout << "=== Keluhan ===" << endl;
	
	cout << "Apakah anda  Flu [Y/N] ? => ";
	cin >> yn;

	yn = toupper(yn);
	flu = (yn == 'Y') ? true : false; 
	
	cout << "Apakah anda  Sakit tenggorokan ? [Y/N] => ";
	cin >> yn;
	yn = toupper(yn);

	tenggorokan = (yn == 'Y') ? true : false; 
	
	cout << "Apakah anda  Batuk batuk ? [Y/N] => ";
	cin >> yn;
	yn = toupper(yn);

	batuk = (yn == 'Y') ? true : false; 
	
	cout << "Sarankan Ke : ";
	if(flu == true and tenggorokan == false and batuk == false){
		cout << "Dokter UMUM" << endl;
	}

	else if(flu == true and tenggorokan == true and batuk == false){
		cout << "Dokter THT" << endl;
	}

	else if(flu == true and tenggorokan == true and batuk == true){
		cout << "Dokter Spesialis Paru - Paru" << endl;
	}
	
	else{
		cout << "Dokter..." << endl;
	}

	system("pause");
}




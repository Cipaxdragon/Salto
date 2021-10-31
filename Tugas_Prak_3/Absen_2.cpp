#include <iostream>

using namespace std;

int main(){
	int ipk64,uas64;
	char nilai;
	string no = "Anda Tidak Lulus";
	string yes = "Selamat anda lulus ";
	cout << "Masukan  NIlai UAS anda => ";
	cin >> uas64;
	cout << "Masukan  NIlai IPK anda => ";
	cin >> ipk64;
//Seleksi Predikat Huruf

	if(uas64 >= 0 and uas64 <= 20){
		nilai = 'D';
			cout << "Nilai Anda " << nilai << endl;
	}
	else	if(uas64 >= 21 and uas64 <= 40){
		nilai = 'C';
			cout << "Nilai Anda " << nilai << endl;
	}	
	else	if(uas64 >= 41 and uas64 <= 70){
		nilai = 'B';
		cout << "Nilai Anda " << nilai << endl;
	}
		else	if(uas64 >= 71 and uas64 <= 100){
		nilai = 'A';
		cout << "Nilai Anda " << nilai << endl;
	}

//Seleksi
//1
	if(ipk64 == 1 and nilai == 'D'){
		cout << no << endl;
	}

	else	if(ipk64 == 1 and nilai == 'C'){
		cout << no << endl;
	}	
	else	if(ipk64 == 1 and nilai == 'B'){
		cout << no << endl;
	}
	else	if(ipk64 == 1 and nilai == 'A'){
		cout << yes << endl;
	}

//2
	else	if(ipk64 == 2 and nilai == 'D'){
		cout << no << endl; 
	}
	else	if(ipk64 == 2 and nilai == 'C'){
		cout << no << endl;
	}
	else	if(ipk64 == 2 and nilai == 'B'){
		cout << yes << endl;
	}
	else	if(ipk64 == 2 and nilai == 'A'){
		cout << yes << endl;
	}
//3
	else	if(ipk64 == 3 and nilai == 'D'){
		cout << no << endl; 
	}
	else	if(ipk64 == 3 and nilai == 'C'){
		cout << yes << endl;
	}
	else	if(ipk64 == 3 and nilai == 'B'){
		cout << yes << endl;
	}
	else	if(ipk64 == 3 and nilai == 'A'){
		cout << yes << endl;
	}

//4
	else	if(ipk64 == 4 and nilai == 'D'){
		cout << yes << endl; 
	}
	else	if(ipk64 == 4 and nilai == 'C'){
		cout << yes << endl;
	}
	else	if(ipk64 == 4 and nilai == 'B'){
		cout << yes << endl;
	}
	else	if(ipk64 == 4 and nilai == 'A'){
		cout << yes << endl;
	}


	
 return 0;
}

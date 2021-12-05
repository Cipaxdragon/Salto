#include <iostream>


using namespace std;

void matematika();
void bahasa();
void ipa();


int main(){
	int i,j,bantu;
	string kosong;
	//Bantu = Wadah Kosong Nilai
	//Kosong wadah kosong untuk nama
	//variabel
	string nama[5] = {
		"Salwa",
		"Miftahul Jannah",
		"Refqi",
		"Fatih",
		"Alfariz"
	};
	int m;//matapelajaran
	int nilai[5][3];


	//0.Matematika
	//1.Bahasa
	//2.IPA


	//Salwa[0]
	nilai[0][0] = 81; 
	nilai[0][1] = 82; 
	nilai[0][2] = 84; 

	//MiftahulJannah[1]
	nilai[1][0] = 82; 
	nilai[1][1] = 88; 
	nilai[1][2] = 89;

	//Refqi[2]
	nilai[2][0] = 87; 
	nilai[2][1] = 89; 
	nilai[2][2] = 90;

	//Fatih[3]
	nilai[3][0] = 80; 
	nilai[3][1] = 82; 
	nilai[3][2] = 85;

	//Alfariz[4]
	nilai[4][0] = 92; 
	nilai[4][1] = 81; 
	nilai[4][2] = 84;

	//Sebelum Pengurutan
	cout << "==== Data ====" << endl;
	//Data Mentah 
	for(i = 0;i < 5;i++){
		cout << "Nama         : " << nama[i] << endl;
		cout << "Nilai MM     : " << nilai[i][0] << endl;
		cout << "Nilai Bahasa : " << nilai[i][1] << endl;
		cout << "Nilai IPA    : " << nilai[i][2] << endl;
		cout << endl;
	}

	matematika();
	bahasa();
	ipa();
	

	system("pause");

	return 0;
}

void bahasa(){
	int m = 1;
	int i,j,bantu;
	string kosong;
	//Bantu = Wadah Kosong Nilai
	//Kosong wadah kosong untuk nama
	//variabel
	string nama[5] = {
		"Salwa",
		"Miftahul Jannah",
		"Refqi",
		"Fatih",
		"Alfariz"
	};

	int nilai[5][3];


	//0.Matematika
	//1.Bahasa
	//2.IPA


	//Salwa[0]
	nilai[0][0] = 81; 
	nilai[0][1] = 82; 
	nilai[0][2] = 84; 

	//MiftahulJannah[1]
	nilai[1][0] = 82; 
	nilai[1][1] = 88; 
	nilai[1][2] = 89;

	//Refqi[2]
	nilai[2][0] = 87; 
	nilai[2][1] = 89; 
	nilai[2][2] = 90;

	//Fatih[3]
	nilai[3][0] = 80; 
	nilai[3][1] = 82; 
	nilai[3][2] = 85;

	//Alfariz[4]
	nilai[4][0] = 92; 
	nilai[4][1] = 81; 
	nilai[4][2] = 84;

	//setelah Pengurutan
	//Matematika
	
	cout << "== bahasa == " << endl;
	for(int i = 0;i < 5;i++){
		for(int j = i;j < 5;j++){
			if(nilai[i][m] < nilai[j][m]){
				//nilai
				bantu = nilai[i][m];
				nilai[i][m] = nilai[j][m];
				nilai[j][m] = bantu;

				//nama
				kosong = nama[i];
				nama[i] = nama[j];
				nama[j] = kosong;

			}
		}
	}

	for(int i = 0;i < 4;i++){
		cout << "No " << i + 1 << endl;
		cout << nama[i] << " = " <<  nilai[i][m] << endl;
	}
	cout << endl;
}

void matematika(){
	int m = 0;
	int i,j,bantu;
	string kosong;
	//Bantu = Wadah Kosong Nilai
	//Kosong wadah kosong untuk nama
	//variabel
	string nama[5] = {
		"Salwa",
		"Miftahul Jannah",
		"Refqi",
		"Fatih",
		"Alfariz"
	};

	int nilai[5][3];


	//0.Matematika
	//1.Bahasa
	//2.IPA


	//Salwa[0]
	nilai[0][0] = 81; 
	nilai[0][1] = 82; 
	nilai[0][2] = 84; 

	//MiftahulJannah[1]
	nilai[1][0] = 82; 
	nilai[1][1] = 88; 
	nilai[1][2] = 89;

	//Refqi[2]
	nilai[2][0] = 87; 
	nilai[2][1] = 89; 
	nilai[2][2] = 90;

	//Fatih[3]
	nilai[3][0] = 80; 
	nilai[3][1] = 82; 
	nilai[3][2] = 85;

	//Alfariz[4]
	nilai[4][0] = 92; 
	nilai[4][1] = 81; 
	nilai[4][2] = 84;

	//setelah Pengurutan
	//Matematika
	
	cout << "== Matematika == " << endl;
	for(int i = 0;i < 5;i++){
		for(int j = i;j < 5;j++){
			if(nilai[i][m] < nilai[j][m]){
				//nilai
				bantu = nilai[i][m];
				nilai[i][m] = nilai[j][m];
				nilai[j][m] = bantu;

				//nama
				kosong = nama[i];
				nama[i] = nama[j];
				nama[j] = kosong;

			}
		}
	}

	for(int i = 0;i < 4;i++){
		cout << "No " << i + 1 << endl;
		cout << nama[i] << " = " <<  nilai[i][m] << endl;
	}
	cout << endl;
}

void ipa(){
	int m = 2;
	int i,j,bantu;
	string kosong;
	//Bantu = Wadah Kosong Nilai
	//Kosong wadah kosong untuk nama
	//variabel
	string nama[5] = {
		"Salwa",
		"Miftahul Jannah",
		"Refqi",
		"Fatih",
		"Alfariz"
	};

	int nilai[5][3];


	//0.Matematika
	//1.Bahasa
	//2.IPA


	//Salwa[0]
	nilai[0][0] = 81; 
	nilai[0][1] = 82; 
	nilai[0][2] = 84; 

	//MiftahulJannah[1]
	nilai[1][0] = 82; 
	nilai[1][1] = 88; 
	nilai[1][2] = 89;

	//Refqi[2]
	nilai[2][0] = 87; 
	nilai[2][1] = 89; 
	nilai[2][2] = 90;

	//Fatih[3]
	nilai[3][0] = 80; 
	nilai[3][1] = 82; 
	nilai[3][2] = 85;

	//Alfariz[4]
	nilai[4][0] = 92; 
	nilai[4][1] = 81; 
	nilai[4][2] = 84;

	//setelah Pengurutan
	//Matematika
	
	cout << "== IPA == " << endl;
	for(int i = 0;i < 5;i++){
		for(int j = i;j < 5;j++){
			if(nilai[i][m] < nilai[j][m]){
				//nilai
				bantu = nilai[i][m];
				nilai[i][m] = nilai[j][m];
				nilai[j][m] = bantu;

				//nama
				kosong = nama[i];
				nama[i] = nama[j];
				nama[j] = kosong;

			}
		}
	}

	for(int i = 0;i < 4;i++){
		cout << "No " << i + 1 << endl;
		cout << nama[i] << " = " <<  nilai[i][m] << endl;
	}
	cout << endl;
}

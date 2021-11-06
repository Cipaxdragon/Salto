#include <iostream>


using namespace std;

int main(){
	int num = 0;
	string nama[4];
	string nim[4];
	int nilai[4];


	cout << "=== Maba Pertama ===" << endl;

	cout << "Input Nama\t=> ";
	cin >> nama[num];

	cout << "Input Nim\t=> ";
	cin >> nim[num];

	cout << "Input nilai\t=> ";
	cin >> nilai[num];


	cout << "\n";
	 cout << "=== Maba Kedua ===" << endl;
	num++;
	cout << "Input Nama\t=> ";
	cin >> nama[num];

	cout << "Input Nim\t=> ";
	cin >> nim[num];

	cout << "Input nilai\t=> ";
	cin >> nilai[num];
	cout << "\n";

	 cout << "\n";
	 cout << "=== Maba Ketiga ===" << endl;

	 num++;
	 cout << "Input Nama\t=> ";
	 cin >> nama[num];

	 cout << "Input Nim\t=> ";
	 cin >> nim[num];

	 cout << "Input nilai\t=> ";
	 cin >> nilai[num];
	 cout << "\n";


	 cout << "\n";
	 cout << "=== Maba Keempat ===" << endl;
	 num++;
	 cout << "Input Nama\t=> ";
	 cin >> nama[num];

	 cout << "Input Nim\t=> ";
	 cin >> nim[num];

	 cout << "Input nilai\t=> ";
	 cin >> nilai[num];
	 cout << "\n";


//Data Tertinggi
//Seleksi Ketiga
	num = 0;
	if(nilai[0] > nilai[1] and nilai[0] > nilai[2] and nilai[0] > nilai[3] and nilai[0] > nilai[4]){
	cout << "== Nilai Tertinggi == " << endl;
	cout << "Nama\t: " << nama[0] << endl;
	cout << "NIM\t: " << nim[0] << endl;
	cout << "Nilai\t: " << nilai[0] << endl;
	}
//Seleksi Kedua

	else if (nilai[1] > nilai[0] and nilai[1] > nilai[2] and nilai[1] > nilai[3]){
	cout << "== Nilai Tertinggi == " << endl;
	cout << "Nama\t:" << nama[1] << endl;
	cout << "NIM\t: " << nim[1] << endl;
	cout << "Nilai\t: " << nilai[1] << endl;
	}

//Seleksi Kedua

	else if (nilai[2] > nilai[0] and nilai[2] > nilai[1] and nilai[2] > nilai[3]){
	cout << "== Nilai Tertinggi == " << endl;
	cout << "Nama\t:" << nama[2] << endl;
	cout << "NIM\t: " << nim[2] << endl;
	cout << "Nilai\t: " << nilai[2] << endl;
	}

//Selesi Keeempat
	
	else if (nilai[3] > nilai[1] and nilai[3] > nilai[2] and nilai[3] > nilai[0]){
	cout << "== Nilai Tertinggi == " << endl;
	cout << "Nama\t: " << nama[3] << endl;
	cout << "NIM]\t: " << nim[3] << endl;
	cout << "Nilai\t: " << nilai[3] << endl;
	}

	cout <<  endl;
    int ratarata;
    ratarata = (nilai[0] + nilai[1] + nilai[2] + nilai[3]) / 4;

    cout << "Rata Rata 4 Inputan = " << ratarata << endl;
	system("pause");		
}

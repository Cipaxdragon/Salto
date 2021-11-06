#include <iostream>


using namespace std;

int main(){
	int x = 0;
	string nama[4];
	string nim[4];
	int nilai[4];


	

	cout << "Masukan Nama => ";
	cin >> nama[0];

	cout << "Masukan Nim => ";
	cin >> nim[0];

	cout << "Masukan nilai akhir => ";
	cin >> nilai[0];


	cout << "\n";



	cout << "Masukan Nama => ";
	cin >> nama[1];

	cout << "Masukan Nim => ";
	cin >> nim[1];

	cout << "Masukan nilai akhir => ";
	cin >> nilai[1];
	cout << "\n";



	 cout << "Masukan Nama => ";
	 cin >> nama[2];

	 cout << "Masukan Nim => ";
	 cin >> nim[2];

	 cout << "Masukan nilai akhir => ";
	 cin >> nilai[2];
	 cout << "\n";

	 cout << "Masukan Nama => ";
	 cin >> nama[3];

	 cout << "Masukan Nim => ";
	 cin >> nim[3];

	 cout << "Masukan nilai akhir => ";
	 cin >> nilai[3];
	 cout << "\n";




	x = 0;
	if(nilai[x] > nilai[1] and nilai[x] > nilai[2] and nilai[x] > nilai[3] and nilai[x] > nilai[4]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama :" << nama[0] << endl;
	cout << "NIM  :" << nim[0] << endl;
	cout << "Nilai  :" << nilai[0] << endl;
	x++;
	}


	else if (nilai[1] > nilai[0] and nilai[1] > nilai[2] and nilai[1] > nilai[3]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama :" << nama[1] << endl;
	cout << "NIM  :" << nim[1] << endl;
	cout << "Nilai  :" << nilai[1] << endl;
	x++;
	}



	else if (nilai[2] > nilai[0] and nilai[2] > nilai[1] and nilai[2] > nilai[3]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama :" << nama[2] << endl;
	cout << "NIM  :" << nim[2] << endl;
	cout << "Nilai  :" << nilai[2] << endl;
	x++;
	}
	else if (nilai[3] > nilai[1] and nilai[3] > nilai[2] and nilai[3] > nilai[0]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama :" << nama[3] << endl;
	cout << "NIM  :" << nim[3] << endl;
	cout << "Nilai  :" << nilai[3] << endl;
	x
	}


	
	cout <<  endl;


    int rata;
    rata = (nilai[0] + nilai[1] + nilai[2] + nilai[3]) / 4;

    cout << "Nilai Rata Rata  = " << ratarata << endl;

	system("pause");		
}

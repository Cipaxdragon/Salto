#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x = 0;
	string nama[5];
	string nim[5];
	int nilai[5];

	//inputan 1
	cout << "\n";
	cout << "=== 1 ===" << endl;

	cout << "Masukan Nama => ";
	cin >> nama[x];

	cout << "Masukan Nim => ";
	cin >> nim[x];

	cout << "Masukan nilai akhir => ";
	cin >> nilai[x];

	//inputan 2
	cout << "\n";
	 cout << "=== 2 ===" << endl;

	x++;
	cout << "Masukan Nama => ";
	cin >> nama[x];

	cout << "Masukan Nim => ";
	cin >> nim[x];

	cout << "Masukan nilai akhir => ";
	cin >> nilai[x];
	cout << "\n";

	//inputan 3
	 cout << "\n";
	 cout << "=== 3 ===" << endl;

	 x++;
	 cout << "Masukan Nama => ";
	 cin >> nama[x];

	 cout << "Masukan Nim => ";
	 cin >> nim[x];

	 cout << "Masukan nilai akhir => ";
	 cin >> nilai[x];
	 cout << "\n";

	//inputan 4
	 cout << "\n";
	 cout << "=== 4 ===" << endl;
	 x++;
	 cout << "Masukan Nama => ";
	 cin >> nama[x];

	 cout << "Masukan Nim => ";
	 cin >> nim[x];

	 cout << "Masukan nilai akhir => ";
	 cin >> nilai[x];
	 cout << "\n";

	//inputan 5
	cout << "\n";
	cout << "=== 5 ===" << endl;
	x++;
	cout << "Masukan Nama => ";
	cin >> nama[x];
	cout << "Masukan Nim => ";
	cin >> nim[x];
	cout << "Masukan nilai akhir => ";
	cin >> nilai[x];
	cout << "\n";

//Data Tertinggi
//0
	x = 0;
	if(nilai[x] > nilai[1] and nilai[x] > nilai[2] and nilai[x] > nilai[3] and nilai[x] > nilai[4]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama :" << nama[0] << endl;
	cout << "NIM  :" << nim[0] << endl;
	cout << "Nilai  :" << nilai[0] << endl;
	x++;
	}
//1

	else if (nilai[1] > nilai[0] and nilai[1] > nilai[2] and nilai[1] > nilai[3] and nilai[1] > nilai[4]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama :" << nama[1] << endl;
	cout << "NIM  :" << nim[1] << endl;
	cout << "Nilai  :" << nilai[1] << endl;
	x++;
	}

//2

	else if (nilai[2] > nilai[0] and nilai[2] > nilai[1] and nilai[2] > nilai[3] and nilai[2] > nilai[4]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama :" << nama[2] << endl;
	cout << "NIM  :" << nim[2] << endl;
	cout << "Nilai  :" << nilai[2] << endl;
	x++;
	}

//3
	
	else if (nilai[3] > nilai[1] and nilai[3] > nilai[2] and nilai[3] > nilai[0] and nilai[3] > nilai[4]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama :" << nama[3] << endl;
	cout << "NIM  :" << nim[3] << endl;
	cout << "Nilai  :" << nilai[3] << endl;
	x++;
	}

//4
	else if (nilai[4] > nilai[1] and nilai[4] > nilai[2] and nilai[4] > nilai[3] and nilai[4] > nilai[0]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama :" << nama[4] << endl;
	cout << "NIM  :" << nim[4] << endl;
	cout << "Nilai  :" << nilai[4] << endl;
	x++;
	}
	
	cout <<  endl;


//Nilai Terendah
//0
	x = 0;
	if(nilai[x] < nilai[1] and nilai[x] < nilai[2] and nilai[x] < nilai[3] and nilai[x] < nilai[4]){
	cout << "Nilai Terendah : " << endl;
	cout << "Nama :" << nama[0] << endl;
	cout << "NIM  :" << nim[0] << endl;
	cout << "Nilai  :" << nilai[0] << endl;
	x++;
	}
//1

	else if (nilai[1] < nilai[0] and nilai[1] < nilai[2] and nilai[1] < nilai[3] and nilai[1] < nilai[4]){
	cout << "Nilai Terendah : " << endl;
	cout << "Nama :" << nama[1] << endl;
	cout << "NIM  :" << nim[1] << endl;
	cout << "Nilai  :" << nilai[1] << endl;
	x++;
	}

//2

	else if (nilai[2] < nilai[0] and nilai[2] < nilai[1] and nilai[2] < nilai[3] and nilai[2] < nilai[4]){
	cout << "Nilai Terendah : " << endl;
	cout << "Nama :" << nama[2] << endl;
	cout << "NIM  :" << nim[2] << endl;
	cout << "Nilai  :" << nilai[2] << endl;
	x++;
	}

//3
	
	else if (nilai[3] < nilai[1] and nilai[3] < nilai[2] and nilai[3] < nilai[0] and nilai[3] < nilai[4]){
	cout << "Nilai Terendah : " << endl;
	cout << "Nama :" << nama[3] << endl;
	cout << "NIM  :" << nim[3] << endl;
	cout << "Nilai  :" << nilai[3] << endl;
	x++;
	}

//4
	else if (nilai[4] < nilai[1] and nilai[4] < nilai[2] and nilai[4] < nilai[3] and nilai[4] < nilai[0]){
	cout << "Nilai Terendah : " << endl;
	cout << "Nama :" << nama[4] << endl;
	cout << "NIM  :" << nim[4] << endl;
	cout << "Nilai  :" << nilai[4] << endl;
	x++;
	}

	system("pause");		
}

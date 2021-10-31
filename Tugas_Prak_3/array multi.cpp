#include <iostream>

using namespace std;

int main(){
	int baris,kolom;
	int num[5][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25},
	};

	cout << "Baris ==> ";
	cin >> baris;
	cout << "Kolom ==> ";
	cin >> kolom;

	cout << "Hasil ==> " << num[baris][kolom] << endl;

	system("pause");
}
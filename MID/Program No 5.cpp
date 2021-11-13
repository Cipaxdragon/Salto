#include <iostream>

using namespace std;

int main(){
	string nama[3],NIK[3];
	int djam[3],dmenit[3];
	int pjam[3],pmenit[3];
	int x;
	string rm[3];
	for(int i = 1; i <= 3;i++){
	x = 0;
    cout << "Peserta " << i << endl;
	cout << "Masukan Nama = ";
	cin >> nama[x];
	cout << "Masukan NIK = ";
	cin >> NIK[x];

	cout << "Jam Datang = ";
	cin >> djam[x];

	cout << "Menit Datang = ";
	cin >> dmenit[x];

	cout << "Jam Pulang = ";
	cin >> pjam[x];

	cout << "Menit Pulang = ";
	cin >> pmenit[x];


	if(djam[x] == 8 and pjam[x] == 16){
        rm[x] = "Rajin";
	}
    else if (djam[x] < 8 and pjam[x] == 16){
        rm[x] = "Sangat Rajin";
    }
     else if (djam[x] > 8 and pjam[x]  == 16){
        rm[x] = "Malas";
    }
    else if (djam[x] > 8 and pjam[x] < 16){
        rm[x] = "Sangat Malas";
    }

    cout << "Hasil Data Keluaran" << endl;

    cout << "Nama :"<< nama[x] << endl;
    cout << "NIK  :"<< NIK[x] << endl;
    cout << "Dia adalah Pegawai  : "<< rm[x] << endl;


    x++;
	
    } 

} 
#include <iostream>

using namespace std;
//variabel global



//prosedur
void namakelompok();



int main(){
    cout << "==== Program Angkutan Umum ====" << endl;
    cout << endl;

    cout << "========== Menu =======" << endl;
    cout << "| 1 | Angkut Penumpang |" << endl;
    cout << "| 2 | Antar Barang     |" << endl;
    cout << "| 3 | Order Barang     |" << endl;
    cout << "| 4 | Tentang Program  |" << endl;
    cout << "========================" << endl << endl;

    int opsi;
    cout << "Input [1-4] ==> ";
    cin >> opsi;

    system("cls");
    if(opsi == 1){

    }
    else if (opsi == 2){

    }
    else if (opsi == 3){

    }
    else if (opsi == 4){
        namakelompok();
    }


    //end
    system("pause");
    system("cls");

}


void namakelompok(){

    cout << "---- Tugas Besar Algoritma Pemrograman ----" << endl << endl;
    cout << "     Jurusan Sistem Informasi 2021" << endl;
    cout << "     Fakultas Sains dan Teknologi" << endl;
    cout << "     Universitas Alauddin Makassar" << endl << endl;

    cout << "Nama Kelompok : " << endl;
    cout <<endl;
    cout << "====================================" << endl;
    cout << "| 1 | Muhammad Askar  (60900121075)|" <<endl;
    cout << "| 2 | Ahmad Alfath    (60900121074)|" <<endl;
    cout << "| 3 | Yusril Mahendra (60900121071)|" <<endl;
    cout << "====================================" << endl;


}

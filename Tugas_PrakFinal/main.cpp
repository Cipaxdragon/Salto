#include <iostream>
#include <ionimanip>

using namespace std:
//variabel Global
    int uang;
    int bank;
//Prototype
void about();

int main(){
    cout << "=== Program Budgeting Uang ===" << endl << endl;
    cout << "Uang Di dompet : "<< uang << endl;
    cout << "Uang Di Bank   : "<< bank << endl;
    

    //tampilan menu
    cout << "|=======================|" << endl;
    cout << "| ====== Menu ========= |" << endl;
    cout << "| 1 | Tambah Transaksi  |" << endl;
    cout << "| 2 | Daftar Transaksi  |" << endl;
    cout << "| 3 | Hapus  Transaksi  |" << endl;
    cout << "| 4 | Cari   Transaksi  |" << endl;
    cout << "| 5 | Urutan Transsaksi |" << endl;
    cout << "| 6 | Akses Bank        |" << endl;
    cout << "| 7 | About             |" << endl;
`   cout << "========================="
    system("pause");
    return 0;
}

void about(){
    cout << "Kelas : C " << endl; 
    cout << "==== Kelompok Biru Tosca =====" << endl << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "| Nama                  | NIM                       |" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "| Ahmad Ghazali         | 60900121064               |" << endl;
    cout << "| Firman Reski Ramadhan | 60900121062               |" << endl;
    cout << "------------------------------------------------------" << endl;

}
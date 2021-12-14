#include <iostream>
#include <iomanip>

using namespace std;
//variabel Global
    int uang;
    int bank;
//Prototype
void about();

int main(){
    int pilih;
    cout << "=== Program Budgeting Uang ===" << endl << endl;
    cout << "Uang Di dompet : Rp"<< uang << endl;
    cout << "Uang Di Bank   : Rp"<< bank << endl << endl;
    
    //tampilan menu
    cout << "|=======================|" << endl;
    cout << "| ====== Menu ========= |" << endl;
    cout << "| 1 | Tambah Transaksi  |" << endl;
    cout << "| 2 | Daftar Transaksi  |" << endl;
    cout << "| 3 | Hapus  Transaksi  |" << endl;
    cout << "| 4 | Cari   Transaksi  |" << endl;
    cout << "| 5 | Urutan Transsaksi |" << endl;
    cout << "| 6 | Akses Bank        |" << endl;
    cout << "| 7 | Info              |" << endl;
    cout << "| 8 | Keluar            |" << endl;
    cout << "=========================" << endl;
    
    lagi:
    cout << endl << "Pilih[1-8] ==> ";
    cin >> pilih;

    //pemilihan
    switch(pilih){
        case 1:

            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        case 7:
            system("cls");
            about();
            break;
        case 8 :
            return 0;
        default:
            cout << "== Inputan Cuma 1-8 == " << endl;
            system("pause");
            system("cls");
            main();
    }

    //try again
    system("pause");
    system("cls");
    main();
}

void about(){
    cout << "==== Kelompok Biru Tosca =====" << endl;
    cout << "Kelas : C " << endl <<endl; 
    cout << "----------------------------------------- " << endl;
    cout << "| Nama                  | NIM            |" << endl;
    cout << "|----------------------------------------|" << endl;
    cout << "| Ahmad Ghazali         | 60900121064    |" << endl;
    cout << "| Firman Reski Ramadhan | 60900121062    |" << endl;
    cout << "| Muhammad Rafly        | 60900121062    |" << endl;
    cout << "-----------------------------------------|" << endl;

}
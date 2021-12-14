#include <iostream>
#include <iomanip>

using namespace std;

//variabel Global

    int uang;
    int bank;

    string namatransaksi[100];
    int  nomimal[100];


    int batas = -1;


//Prototype
void about();
void tambah();
void pengeluaran();
void pemasukan();
void daftar();
void hapus();
void cari();

int main(){
    int pilih;
    cout << "=== Program Dompet Digital ===" << endl << endl;
    cout << "Uang Di dompet : Rp "<< uang << endl;
    cout << "Uang Di Bank   : Rp "<< bank << endl << endl;
    
    //tampilan menu
    cout << "|=======================|" << endl;
    cout << "| ====== Menu ========= |" << endl;
    cout << "| 1 | Tambah Transaksi  |" << endl;
    cout << "| 2 | Daftar Transaksi  |" << endl;
    cout << "| 3 | Hapus  Transaksi  |" << endl;
    cout << "| 4 | Cari   Transaksi  |" << endl;
    cout << "| 5 | Urutan Transaksi  |" << endl;
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
            system("cls");
            tambah();
            break;
        case 2:
            system("cls");           
            daftar();
            break;
        case 3:
            system("cls");           
            hapus();           
            break;
        case 4:
            system("cls");
            cari();
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


void tambah(){
    batas++;
    int pilih;

    cout << "=== Tambah Transaksi ===" << endl;
    cout << " 1 . Pengeluran " << endl;
    cout << " 2 . Pemasukan  " << endl;

    cout << endl << "Pilih [1-2] ==> ";
    cin >> pilih;

    //proses
    switch(pilih){
        case 1 :
            system("cls");
            pengeluaran();
            break;
        case 2 :
            system("cls");
            pemasukan();
            break;
        default:
            cout << "== Inputan Cuma [1-2] " << endl;
            system("pause");
            tambah();
    }


}

void pengeluaran(){
    cout << "=== Pengeluaran ===" << endl;
    cout << "Nama   Pengeluaran => ";
    cin.ignore();
    getline(cin,namatransaksi[batas]);
    cout << "Nomnal Pengeluaran => "; cin >> nomimal[batas];


    uang = uang - nomimal[batas];
    namatransaksi[batas] = namatransaksi[batas] + " [Pengeluaran]";

}


void pemasukan (){
    int nama;
    cout << "=== Pemasukan "<< batas + 1 <<" ===" << endl;
    cout << "Nama   Pemasukan   => ";
    cin.ignore();
    getline(cin,namatransaksi[batas]);
    cout << "Nomnal Pemasukan   => ";
    cin >> nomimal[batas];

    uang = uang + nomimal[batas];
    namatransaksi[batas] = namatransaksi[batas] + " [Pemasukan]";

}


void daftar(){
    cout << "=== Program Dompet Digital ===" << endl << endl;
    cout << "Uang Di dompet : Rp "<< uang << endl;
    cout << "Uang Di Bank   : Rp "<< bank << endl << endl;
    int total;
    cout << "==== Daftar Transaksi ==== " << endl;

    for(int i = 0;i <= batas;i++){
        cout << "Transaksi " << i + 1 << endl;
        cout << "Nama    : " << namatransaksi[i] << endl;
        cout << "Nominal : Rp " << nomimal[i] << endl << endl;
    }
    for(int i = 0;i < batas;i++){
        total = nomimal[i] + nomimal[i + 1];
    }
    if(batas != 0){
        cout << endl << "Total Transaksi : Rp " << total << endl; 
    }
}


void hapus(){
    int hapus;
    daftar();
    cout << endl << "=== Hapus Transaksi ===" << endl;
    cout << endl << "Hapus Data Ke = > ";
    cin >> hapus;
    hapus--;
    for(int i = hapus;i < batas;i++){
        namatransaksi[i] = namatransaksi[i + 1];
        nomimal[i] = nomimal[i + 1];
    }
    int pilih;
    cout << "== Jenis Transaksi ==" << endl;
    cout << "1. Pemasukan" << endl;
    cout << "2. Pengeluaran" << endl;
    cout << "Pilih[1-2] => ";
    cin >> pilih;

    switch(pilih){
        case 1 :
            uang = uang - nomimal[hapus];
            break;
        case 2 :
            uang = uang + nomimal[hapus];
            break;
    }
    cout << "Transaksi Ke " << hapus + 1 << " Terhapus " << endl;
    batas--;


}




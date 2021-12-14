#include <iostream>
#include <iomanip>

using namespace std;

//variabel Global

    int uang;
    int bank;

    //pemasukan
    string nammasuk[100];
    int  pricemasuk[100];
    int datmasuk = -1;


    //pengeluaran
    string namkeluar[100];
    int pricekeluar[100];
    int datkeluar = -1;
    


//Prototype
void about();
void tambah();
void pengeluaran();
void pemasukan();
void daftar();
void hapus();
void cari();
void hapuspemasukan();

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
            // cari();
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
    cout << "=== Tugas Final Algoritma Pemrograma===" << endl; 
    cout << "\n\n";
    cout << "==== Kelompok Biru Tosca =====" << endl;
    cout << "Kelas : C " << endl <<endl; 
    cout << "Daftar Nama Kelompok :" << endl;
    cout << "----------------------------------------- " << endl;
    cout << "| Nama                  | NIM            |" << endl;
    cout << "|----------------------------------------|" << endl;
    cout << "| Ahmad Ghazali         | 60900121064    |" << endl;
    cout << "| Firman Reski Ramadhan | 60900121062    |" << endl;
    cout << "| Muhammad Rafly        | 60900121062    |" << endl;
    cout << "-----------------------------------------|" << endl;

}


void tambah(){
    int pilih;

    cout << "=== Tambah Transaksi ===" << endl;
    cout << " 1 . Pemasukan  " << endl;
    cout << " 2 . Pengeluran " << endl;

    cout << endl << "Pilih [1-2] ==> ";
    cin >> pilih;

    y :
    //proses
    switch(pilih){
        case 1 :
            system("cls");
            pemasukan();
            break;
        case 2 :
            system("cls");
            pengeluaran();
            break;
        default:
            cout << "== Inputan Cuma [1-2] " << endl;
            system("pause");
            tambah();
    }
//try again
    x :
    char yn;
    cout << "Masih Mau Tambah Transaksi ?" << endl;
    cout << "[Y/N] =>";
    cin >> yn;
    yn = toupper(yn);

    switch(yn){
        case 'Y' :
            system("cls");
            goto y;
            break;
        case 'N' :
            system("cls");
            break;
        default :
            cout << "Input Yang Benar !!!" << endl;
            system("pause");
            goto x;
    }


}


void pemasukan (){
    datmasuk++;
    int nama;
    cout << "=== Pemasukan "<< datmasuk + 1 <<" ===" << endl;
    cout << "Nama   Pemasukan   => ";
    cin.ignore();
    getline(cin,nammasuk[datmasuk]);
    cout << "Nominal Pemasukan   => ";
    cin >> pricemasuk[datmasuk];

    uang = uang + pricemasuk[datmasuk];


}



void pengeluaran(){
    datkeluar++;
    cout << "=== Pengeluaran ===" << endl;
    cout << "Nama   Pengeluaran => ";
    cin.ignore();
    getline(cin,namkeluar[datkeluar]);
    cout << "Nominal Pengeluaran => ";
    cin >> pricekeluar[datkeluar];


    uang = uang - pricekeluar[datkeluar];


}




void daftar(){
    cout << "=== Program Dompet Digital ===" << endl << endl;
    cout << "Uang Di dompet : Rp "<< uang << endl;
    cout << "Uang Di Bank   : Rp "<< bank << endl << endl;
    int total;
    int totalkeluar;
    cout << "==== Daftar Transaksi ==== " << endl;
//pemasukan
    cout << "=== Pemasukan ===" << endl;
    for(int i = 0;i <= datmasuk;i++){
        cout << "Transaksi " << i + 1 << endl;
        cout << "Nama    : " << nammasuk[i] << endl;
        cout << "Nominal : Rp " << pricemasuk[i] << endl << endl;
    }
    for(int i = 0;i < datmasuk;i++){
        total = pricemasuk[i] + pricemasuk[i + 1];
    }
    if(!(datmasuk <= 0)){
        cout << endl << "Total Pemasukan : Rp " << total << endl; 
    }

    cout << endl;

//pengeluaran
    cout << "=== Pengeluaran ===" << endl;
    for(int i = 0;i <= datkeluar;i++){
        cout << "Transaksi " << i + 1 << endl;
        cout << "Nama    : " << namkeluar[i] << endl;
        cout << "Nominal : Rp " << pricekeluar[i] << endl << endl;
    }
    for(int i = 0;i < datkeluar;i++){
        totalkeluar = pricekeluar[i] + pricekeluar[i + 1];
    }
    if(!(datkeluar <= 0)){
        cout << endl << "Total Pengeluaran : Rp " << totalkeluar << endl; 
    }
}

void hapus(){
    cout << "==== Hapus Transaksi ====" << endl;
    cout << "1. Data Pemasukan" << endl;
    cout << "2. Data Pengeluaran" << endl;
    int pilih;
    cin  >> pilih;

    switch(pilih){
        case 1 :
            hapuspemasukan();
            break;
        case 2 :

            break;
    }

}


void hapuspemasukan(){
    int hapus;
    int total;
    cout << "== Data Pemasukan == " << endl;
//output Data
 cout << "=== Pemasukan ===" << endl;
    for(int i = 0;i <= datmasuk;i++){
        cout << "Transaksi " << i + 1 << endl;
        cout << "Nama    : " << nammasuk[i] << endl;
        cout << "Nominal : Rp " << pricemasuk[i] << endl << endl;
    }
    for(int i = 0;i < datmasuk;i++){
        total = pricemasuk[i] + pricemasuk[i + 1];
    }
    if(!(datmasuk <= 0)){
        cout << endl << "Total Pemasukan : Rp " << total << endl; 
    }

    cout << endl;

//Proses Delete
    cout << "Hapus Transaksi Ke ?" << endl;
    cout << "[Input] ==>";
    cin >> hapus;
    hapus--;

    //perulangan proses delete
    for(int i = hapus;i <= datmasuk;i++){
        nammasuk[i] = nammasuk[i + 1];
        pricemasuk[i] = pricemasuk[i + 1];
    }
    cout << "Transaksi Ke " << hapus + 1 << " Berhasil di hapus" << endl;
    datmasuk--;

}




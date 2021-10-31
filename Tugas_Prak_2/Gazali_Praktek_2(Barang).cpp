#include <iostream>

using namespace std;

//Variabel Nama
string nama1,nama2,nama3,nama4,nama5;

//Harga barang
int hbar1,hbar2,hbar3,hbar4,hbar5,total;

//Tanggal Kadaluarsa
string exp1,exp2,exp3,exp4,exp5;

int main(){
    //Judul
    cout << "=====> Tugas 2 Praktek <======" << endl;
    cout << "======> Tabel Barang <======" << endl;

    cout << "\n";
//Barang Pertama
    cout << "==== Barang 1====" << endl;
    cout << "Nama Barang \t\t===> "; getline(cin, ::nama1);
    cout << "Harga Barang \t\t===> "; cin >> ::hbar1;cin.ignore();
    cout << "Tanggal Kadaluarsa \t===> "; getline(cin, ::exp1);
    cout << "\n";
//Barang Kedua
    cout << "==== Barang 2====" << endl;
    cout << "Nama Barang \t\t===> "; getline(cin, ::nama2);
    cout << "Harga Barang \t\t===> "; cin >> ::hbar2;cin.ignore();
    cout << "Tanggal Kadaluarsa \t===> "; getline(cin, ::exp2);
    cout << "\n";
//Barang Ketiga  n 
    cout << "==== Barang 3====" << endl;
    cout << "Nama Barang \t\t===> "; getline(cin, ::nama3);
    cout << "Harga Barang \t\t===> "; cin >> ::hbar3;cin.ignore();
    cout << "Tanggal Kadaluarsa \t===> "; getline(cin, ::exp3);
    cout << "\n";
//Barang Keempat
    cout << "==== Barang 4====" << endl;
    cout << "Nama Barang \t\t===> "; getline(cin, ::nama4);
    cout << "Harga Barang \t\t===> "; cin >> ::hbar4;cin.ignore();
    cout << "Tanggal Kadaluarsa \t===> "; getline(cin, ::exp4);
    cout << "\n";
//Barang Kelima
    cout << "==== Barang 5====" << endl;
    cout << "Nama Barang \t\t===> "; getline(cin, ::nama5);
    cout << "Harga Barang \t\t===> "; cin >> ::hbar5;cin.ignore();
    cout << "Tanggal Kadaluarsa \t===> "; getline(cin, ::exp5);
    cout << "\n";
//Total Harga
total = hbar1 + hbar2 + hbar3 + hbar4 + hbar5;

//Output Tabel  
    cout << "=================================================================" << endl;
    cout << "|No | Nama Barang \t| Harga \t| Expired\t\t|" << endl;
    cout << "|---|-------------------|---------------|-----------------------|" << endl;
    cout << "| 1 | "<<::nama1<<"\t\t| Rp "<<::hbar1<<"\t| "<<::exp1 <<"\t|" << endl;
    cout << "| 2 | "<<::nama2<<"\t\t| Rp "<<::hbar2<<"\t| "<<::exp2 <<"\t|" << endl;
    cout << "| 3 | "<<::nama3<<"\t\t| Rp "<<::hbar3<<"\t| "<<::exp3 <<"\t|" << endl;
    cout << "| 4 | "<<::nama4<<"\t\t| Rp "<<::hbar4<<"\t| "<<::exp4 <<"\t|" << endl;
    cout << "| 5 | "<<::nama5<<"\t\t| Rp "<<::hbar5<<"\t| "<<::exp5 <<"\t|" << endl;
    cout << "| Total Harga\t\t| Rp "<<total<<"\t\t\t\t|"<<endl;
    cout << "=================================================================" << endl;

return 0;
}


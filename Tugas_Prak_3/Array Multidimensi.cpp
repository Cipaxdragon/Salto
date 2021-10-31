#include <iostream>

using namespace std;

int main(){
    int x,y;
    int angka[3][3]= {
    {1,2,3},
    {4,5,6},
    {7,8,9},
    };
    cout << "== Program Array Multidimensi ==" << endl;
    cout << "\n";
    cout << "{ 1 2 3 }" << endl;
    cout << "{ 4 5 6 }" << endl;
    cout << "{ 7 8 9 }" << endl;
    cout << "\n\n";
    cout << "[Baris] ===> ";
    cin >> x;
    //Jika Inputa Ngawur
        if(!(x <= 2 and x >= 0)){
            cout << "Inputan cuma 0-2" << endl;
            system("pause");
            system("cls");
            main();
        }
    cout << "[Kolom] ===> ";
    cin >> y;
    //Jika Inputa Ngawur
        if(!(y <= 2 and y >= 0)){
            cout << "Inputan cuma 0-2" << endl;
            system("pause");
            system("cls");
            main();
        }
    cout << "--- Hasil ---" << endl;
    cout << "====> " << angka[x][y] << endl;
    printf("Tekan Enter Untuk Coba Lagi...");
    cin.ignore();
    cin.get();
    system("cls");
    main();
}
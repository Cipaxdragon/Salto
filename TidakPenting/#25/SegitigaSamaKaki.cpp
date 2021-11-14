#include <iostream>

using namespace std;

int main(){

    system("cls");

    //Segitiga Sama Kaki
    printf("Pola Segitiga 1\n");

    for(int i = 1; i <= 10;i++){
        
        //Pola Satu
        for(int j = 10; j > i;j--){
            cout << " ";
        }
        for(int k = 1; k <= (2 * i - 1);k++){
            cout << "*";
        }
        cout << endl;

    }
    cout << endl;
    printf("Pola Segitiga 2\n\n");

    //Segitga Sama Kaki Tapi Terbalik
    for(int i = 1; i <= 10;i++){
        for(int k = 1; k < i; k++){
            cout << " ";
        }
        for (int j = 10; j >= (2 * i - 10);j--){
            cout << "*";
        }
        cout << endl;
    }

    //Ending
    printf("Tekan Enter Untuk Keluar....");
    cin.get();
    system("cls");


}

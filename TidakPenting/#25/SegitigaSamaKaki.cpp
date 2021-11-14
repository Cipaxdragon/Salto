#include <iostream>

using namespace std;

int main(){

//Segitiga Sama Kaki

    //Segitiga Tidak Terbalik
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
//Segitiga Terbalik
    cout << endl;
    printf("Pola Segitiga 2\n");

    //Segitga Terbalik
    for(int i = 1; i <= 10;i++){
        for(int k = 1; k < i; k++){
            cout << " ";
        }
        for (int j = 10; j >= (2 * i - 10);j--){
            cout << "*";
        }
        cout << endl;
    }
    system("pause");

}

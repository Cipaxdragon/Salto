#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Masukan Tinggi Segitiga => ";
    cin >> n;
    //Segitiga  Siku Siku 1
    printf("Segitiga Siku Siku 1\n\n");
    for(int i = 1;i <= n;i++){
        for(int j = 1; j <= i;j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //Segitiga Siku Siku  2
    printf("Segitiga Siku Siku 2\n\n");
    for(int i = 1;i <= n;i++){
        for(int j = n; j >= i;j--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;


    //Segitiga Siku Siku 3
    printf("Segitiga Siku Siku 3\n\n");
    for(int i = 1;i <= n;i++){
        for(int j = 1; j < i;j++){
            cout << " ";
        }
        for(int k = n; k >= i;k--){
            cout << "*";
        }
        cout << endl;
    }
    

    //Segitiga Siku Siku 4
    printf("Segitiga Siku Siku 4\n\n");
    for(int i = 1;i <= n;i++){
        for(int j = n; j >= i;j--){
            cout << " ";
        }
        for(int k = 1; k <= i;k++){
            cout << "*";
        }
        cout << endl;
    }
    

}
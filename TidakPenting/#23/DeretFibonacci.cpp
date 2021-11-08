#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    b = 1;
    c = 0;
    int deret;
    cout << "Masukan Deret => ";
    cin >> deret;
    cout << c << " " << b << " ";
    for(int i = 1; i <= deret;i++){
        a = b + c;
        cout << a << " ";
        c = b;
        b = a;
        a++;
    }
}
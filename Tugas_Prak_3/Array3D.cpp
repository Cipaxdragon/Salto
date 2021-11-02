#include <iostream>

using namespace std;

int main(){
    int angka[2][2][2] = {
        {{1,2},{3,4}},
        {{5,6},{7,8}}
    };
    cout << angka[0][0][0] << endl;//1
    cout << angka[0][0][1] << endl;//2
    
    cout << angka[0][0][0] << endl;//1
    cout << angka[0][0][1] << endl;//2
    
    cout << angka[0][0][0] << endl;//1
    cout << angka[0][0][1] << endl;//2
    
    cout << angka[0][0][0] << endl;//1
    cout << angka[0][0][1] << endl;//2
    
    
}
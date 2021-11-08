#include <iostream>

using namespace std;

int main(){
    int angka[2][2][2] = {
        {{1,2},{3,4}},
        {{5,6},{7,8}}
    };
    
    cout << angka[0][0][0] << endl;//1
    cout << angka[0][0][1] << endl;//2
    
    cout << angka[0][1][0] << endl;//3
    cout << angka[0][1][1] << endl;//4
    
    cout << angka[1][0][0] << endl;//5
    cout << angka[1][0][1] << endl;//6
    
    cout << angka[1][1][0] << endl;//7
    cout << angka[1][1][1] << endl;//8

    system("pause");
    return 0;    
    
}

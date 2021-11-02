#include <iostream>

using namespace std;

int main(){
    int angka[3][3][3] ={
        {{1,2,3},{4,5,6},{7,8,9}},
        {{11,12,13},{14,15,16},{17,18,19}},
        {{20,21,22},{23,24,25},{26,27,28}}
    }; 

    cout << angka[2][2][1] << endl;


    system("pause");
    return 0;
}
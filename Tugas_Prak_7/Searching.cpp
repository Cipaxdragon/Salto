#include <iostream>

using namespace std;



int main(){
	int caribinari(int[],int,int);
	int n,i,a[100],e,res;

	n = 20;

	for(int i = 0;i < n;i++){
		a[i] = 50 - i;
		cout << "Data " << i + 1 << " : " << a[i] << endl;
	}
	cout << "Cari : ";
	cin >> e;


	res = caribinari(a,n,e);

	if(res != -1){
		cout << "Data Ditemukan Pada " << res + 1 << endl;
	}
	else{
		cout << "Data tidak ditemukan " << endl;
	}
	system("pause");
}

int caribinari(int a[],int n,int e){
	int f,l,m;
	f = 0;
	l = n-1;
	while(f <=1 ){
		m = (f+1)/2;
		if(e == a[m]){
			return (m);
		}
		else{
			if(e > a[m]){
				f=m+1;
			}
			else{
				l=m-1;
			}
		}
	}
	return -1;
}
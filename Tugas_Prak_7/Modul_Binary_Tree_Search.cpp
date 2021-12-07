#include <iostream>


using namespace std;




int main(){
	while(true){
	int binary_search(int[],int,int);
	int n,i,a[100],e,res;
	cout << "Masukan Jumlah Data Integer : ";
	cin >> n;
	cout << "\nMasukan Elemen Array data Secara urut Dari Kecil Ke Besar\n";

	for(i=0;i<n;++i){
		cin >> a[i];
	}

	cout << "\nMasukan data yang ingin dicari dalam array data : ";
	cin >> e;

	res = binary_search(a,n,e);


	if(res != -1){
		cout << "Data Ditemukan Pada Array Ke " << res + 1 << endl; 
	}
	else {
		cout << "Data Tidak Ditemukan di dalam Array" << endl;
	}
	system("pause");
	system("cls");
	}
	return 0;
}




int binary_search(int a[],int n, int e){
	int f,l,m;
	f = 0;
	l = n - 1;
	while(f <= l){
		m = (f+l)/2;
		if(e == a[m]){
			return (m);
		}
		else{
			if(e > a[m]){f = m + 1;}
			else{l=m-1;}
		}
	}
	return -1;
}
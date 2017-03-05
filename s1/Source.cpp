#include <iostream>
using namespace std;

void citeste(int v[100],int n);
void produs(int v[100],int n);

void citeste(int v[100],int n){
	int i;
	for(i=0;i<n;i++){
		cout << "sir[" << i << "]= ";
		cin >> v[i];
	}
	produs(v,n);
}

void produs(int v[100], int n){
	int i,produs=1;
	for(i=0;i<n;i++){
		if(v[i]<10){
			if(v[i]%2!=0){
				produs*=v[i];
			}
		}
	}
	cout << "Produsul numerelor impare mai mici ca 10 este " << produs << endl;
}

int main(){
	int v[100],n;
	cout << "Introduceti n" << endl;
	cin >> n;
	citeste(v,n);

	system("pause");
	return 0;




}
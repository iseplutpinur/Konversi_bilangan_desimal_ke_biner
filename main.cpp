#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

//program konversi bilangan desimal ke biner
int main(){
	int p, n, i = 0;
	cout << "Masukan bilangan desimal: ";
	cin >> p;
	double A[100];
	do{
		A[++i] = p%2;
		p = p/2;
		floor(p);
	} while(p>1);
	cout << "Nilai binernya: ";
	cout << p;
	for(n=i; n>=1; n--){
		cout << A[n];
	}
	getch();
	return 0;
}
#include <iostream>
using namespace std;

int main(){
	double A, T, luas;
	
	cin >> A;
	cin >> T;
	
	luas = (A*T)/2;
	cout.precision (2);
	cout << fixed << luas;
	
return 0;
}

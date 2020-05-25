#include <iostream>
using namespace std;

int main(){
	int N, M, hasil, sisa;
	cin >> N;
	cin >> M;
	
	hasil = N/M;
	cout << "masing-masing: " << hasil << endl;
	
	sisa = N%M;
	cout << "bersisa: " << sisa;
	
return 0;
}

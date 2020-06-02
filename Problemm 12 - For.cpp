#include <iostream>

using namespace std;

int main (){
	int N, B, i, JumlahBebek;
	cin >> N;
	
	for (i=0; i<N; i++){
		cin >> B;
		JumlahBebek = B*(i-1);
	}
	
	cout << JumlahBebek;
}

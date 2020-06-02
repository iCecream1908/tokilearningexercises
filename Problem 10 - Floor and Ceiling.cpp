#include <iostream>
#include <cmath>

using namespace std;

int main (){
	double N;
	int a, F, C;
	
	cin >> N;
	a = trunc (N);
	
	if (N!=a){
	    if (N>0){
		F = a;
		C = a + 1;
	    }else if (N<0) {
		F = a-1;
		C = a;
	    }
	}else if (N=a){
	    F = a;
		C = a;
    }
 
 cout << F << " " << C << endl;

cin.get();
return 0;
}

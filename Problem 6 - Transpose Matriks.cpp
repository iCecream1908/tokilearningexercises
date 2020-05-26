#include <iostream>
using namespace std;

int data[3][3];

int main() {
    
	for (int a=0; a<3; a++){
        for (int b=0; b<3; b++){
            cin >> data[a][b];
        }
    }
    
    cout << endl;
    
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++){
            if (b == 0){
                cout << data[b][a] << " ";
            }else{
                cout << data[b][a] << " ";
            }
        }
		cout << endl;
    }
    
    cin.get();
    return 0;
}

#include <iostream>

using namespace std;

int main (){
	int x1, x2, y1, y2, JarakManhattan, JarakManhattanBaru;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	
	JarakManhattan = (x1 - x2) + (y1 -y2);
	JarakManhattanBaru = JarakManhattan*(-1);
	
	if (JarakManhattan < 0){
		cout << JarakManhattanBaru;
	}else{
	cout << JarakManhattan;
    }
    
	cin.get();
	return 0;
}

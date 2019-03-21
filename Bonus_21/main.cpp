#include <iostream>

using namespace std;

int fakultet(int n) {
	
	int result;
	
	if(n==0) result = 1;
	else if(n==0) result = 1;
	else {
		result = fakultet(n-1)*n;
	}
	
	return result;
}


int main(int argc, char** argv) {
	
	int n;
	cout << "Beräkna fakulteten för: " << endl;
	cin >> n;
	
	cout << "Svar: " << fakultet(n);
	
	return 0;
}

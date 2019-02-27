#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int A, B, temp;
	
	cout << "Mata in tal A: " << endl;
	cin >> A;
	cout << "Mata in tal B: " << endl;
	cin >> B;
	
	temp = A;
	A = B;
	B = temp;

	cout << "Tal A: " << A << endl;
	cout << "Tal B: " << B << endl;
	
	return 0;
}

#include <iostream>

using namespace std;

int summa(int n) {
	int sum;
	if(n==1) sum = 1;
	else sum = n + summa(n-1);
	
	return sum;
	
}


int main(int argc, char** argv) {
	
	int talsumma;
	cout << "Ber�kna talsumman f�r: " << endl;
	cin >> talsumma;
	
	int resultat = summa(talsumma);
	
	cout << "Talsumman f�r " << talsumma << " �r " << resultat << endl;
	
	return 0;
}

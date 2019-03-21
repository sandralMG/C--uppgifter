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
	cout << "Beräkna talsumman för: " << endl;
	cin >> talsumma;
	
	int resultat = summa(talsumma);
	
	cout << "Talsumman för " << talsumma << " är " << resultat << endl;
	
	return 0;
}

#include <iostream>

using namespace std;

int fibonacci(int n) {
	int fib;
	
	if(n == 1 or n == 2) {
		fib = 1;
	} else {
		fib = fibonacci(n-1) + fibonacci(n-2);
	}
	return fib;
}


int main(int argc, char** argv) {
	
	cout << "Detta program skriver ut de 20 första fibonaccintalen" << endl;
	
	for(int i = 1; i <= 20; i++) {
		cout << fibonacci(i) << endl;
	}
	
	return 0;
}

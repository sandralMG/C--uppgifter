#include <iostream>

using namespace std;

bool isPrime(int n, int i) {
	
	
   // Base cases 
    if (n <= 2) 
        return (n == 2) ? true : false; 
    if (n % i == 0) 
        return false; 
    if (i * i > n) 
        return true; 
  
    // Check for next divisor 
    return isPrime(n, i-1); 
	
}

int main(int argc, char** argv) {
	
	int n;
	
	cout << "Primtal?: " << endl;
	cin >> n;
	
	
    if (isPrime(n, n/2)) 
        cout << "Ja"; 
    else
        cout << "Nej"; 
	return 0;
}

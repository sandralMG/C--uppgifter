#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float sum, tal;
	
	cout << "Mata in tal 1: " << endl;
	cin >> tal;
	sum = tal;
	cout << "Mata in tal 2: " << endl;
    cin >> tal;
    sum = sum + tal;
    cout << "Mata in tal 3: " << endl;
    cin >> tal;
    sum = sum + tal;

    cout << "Mata in tal 4: " << endl;
    cin >> tal;
    sum = sum + tal;

    cout << "Mata in tal 5: " << endl;
    cin >> tal;
    sum = sum + tal;

    
    cout << "***********************" << endl;
    cout << "Medelvärdet är: " << sum/5 << endl;
    cout << "***********************";

    
	
	return 0;
}

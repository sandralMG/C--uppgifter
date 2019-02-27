#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int tal;
	
	
	cout << "Mata in ett heltal: " << endl;
	cin >> tal;

	
	if(tal > 45 and tal < 63) {
		
		cout << "GRATTIS! DU VANN! BRA JOBBAT!";
	} else {
		cout << "GAME OVER";
	}
	

	
	return 0;
}

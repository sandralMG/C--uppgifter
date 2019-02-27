#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	
	
	bool increase = true;
	int kontroll = 8;
	int i = 1;
	
	while(i < kontroll and i > 0) {
		
		if(i == 7) {
			increase = false;
		}
		
	
		cout << i << endl;
		
			if(increase) {
			i++;
		} else {
			i--;
		}
		
		
	}
	
	
	return 0;
}

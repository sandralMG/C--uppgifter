#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int array[10] = {0,1,2,3,4,5,6,7,8,9};

    

    for(int i = 0; i < 10; i++) {

        cout << array[9-i] << endl;

    }
	return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	 /*BONUSUPPGIFT 10: FIBONACCI */

    

    int n, first = 0, second = 1, next;

    

    cout << "Hur mång fibonacci-tal vill du skriva ut?" << endl;

    cin >> n;

    

    for(int c = 0; c < n; c++) {

     

        if(c<=1) {

            next = c;

        } else {

            next = first + second;

            first = second;

            second = next;

        }

        cout << next << endl;

    }
	
	
	return 0;
}

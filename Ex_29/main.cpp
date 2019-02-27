#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	string changeStory[10];

    int i = 0;

    

    cout << "Skriv in 10 st föremål/namn/vadDuVill";

    

    while(i < 10) {

        cin >>  changeStory[i];

        i++;

    }



    cout << "Words added";

    

    cout << "The story " << changeStory[0] << " sjakföaafsk " + changeStory[1];



	return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int t1,t2,m1,m2,s1,s2;
	int sum_t, sum_m, sum_s;
	
	cout << "Skriv in resultat lopp 1:";
	cin >> t1 >> m1 >> s1;
	cout << "Skriv in resultat lopp 2:";
	cin >> t2 >> m2 >> s2;
	
	sum_t = t1 + t2;
	sum_s = s1 + s2;
    sum_m = m1 + m2;
	
	if(sum_s > 60){
		
		sum_m++;
		sum_s = sum_s%60;
		
	}
	
	if( sum_m > 60) {
		
		sum_t++;
		sum_m = sum_m%60;

	}
	
	
    cout << "Din tid är: " << sum_t << ":" << sum_m << ":" << sum_s;
	
	
	
	

	
	return 0;
}

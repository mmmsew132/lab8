#include<iostream>
using namespace std;

char before(char x){
	char y;

	int i = 0;
	while(i < 26){
		if (x == ('A' + i)){
			y = x - 1;
			i = 27;
		} else {
			y = '0';
			i++;
		}
	}

	if (x == 'A'){
		y = 'Z';
	}

	return y;
}

int main(){
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}

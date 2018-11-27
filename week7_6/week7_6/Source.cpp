#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n&&n<1000) {
		cout << n / 100 << endl;
		cout << (n % 100) / 50 << endl;
		cout << (n % 100 % 50) / 20 << endl;
		cout << (n % 100 % 50 % 20) / 10 << endl;
		cout << (n % 100 % 50 % 20 % 10) / 5 << endl;
		cout << n % 5 << endl;
	}
	
	//test program
	/*
	int n;
	for (n = 0; n < 1000; n++) {
		if ((n % 100 % 50 % 20) / 10 != (n % 20) / 10)
			break;
	}
	cout << n << endl;
	*/
	return 0;
}
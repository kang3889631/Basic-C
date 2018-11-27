#include <iostream>
using namespace std;

int main() {
	int h, r,result;
	cin >> h >> r;
	cout << int(20000 / (3.14159*r*r*h)) + 1 << endl;
	return 0;
}
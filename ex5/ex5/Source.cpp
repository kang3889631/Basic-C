#include <iostream>
using namespace std;

int main() {
	int a, b, result = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i % 2 == 1) {
			result += i;
		}
	}
	cout << result << endl;
	return 0;
}
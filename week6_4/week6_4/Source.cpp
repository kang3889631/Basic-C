#include <iostream>
using namespace std;

int main() {
	int a[6];
	int tmp = 0,result;
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 6; i++) {
		if (a[i] % 2 == 0) {
			tmp = a[i];
			break;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (a[i] % 2 == 0 && a[i]<tmp) {
			tmp = a[i];
		}
	}

	for (int i = 0; i < 6; i++) {
		if (a[i] % 2 == 1) {
			result = a[i];
			break;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (a[i] % 2 == 1 && a[i]>result) {
			result = a[i];
		}
	}
	result - tmp > 0 ? result -= tmp : result = tmp - result;
	cout << result << endl;
	return 0;
}
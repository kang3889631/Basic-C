#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int a[1000];
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				if (a[i] < a[j]) {
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		n % 2 == 0 ? cout << (a[n / 2 - 1] + a[n / 2]) / 2 << endl : cout << a[n / 2] << endl;
	}
	return 0;
}
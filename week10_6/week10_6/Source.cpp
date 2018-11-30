#include <iostream>
using namespace std;

int main() {
	int n = 0, m = 0, temp;
	int a[1000];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		temp = a[n-1];
		for (int j = n-1; j > 0; j--) {
			a[j] = a[j-1];
		}
		a[0] = temp;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
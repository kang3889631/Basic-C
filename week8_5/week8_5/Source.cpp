#include <iostream>
using namespace std;

int main() {
	int n = 0, k = 0;
	int a[1000];
	bool y = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[i] + a[j] == k)
				y = 1;
		}
	}
	y == 1 ? cout << "yes" << endl : cout << "no" << endl;
	return 0;
}
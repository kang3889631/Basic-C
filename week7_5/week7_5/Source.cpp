#include <iostream>
using namespace std;

int main() {
	int n, k, current, count;
	int a[1000];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		current = a[i];
		count = 0;
		for (int j = 0; j < n; j++) {
			if (a[j] > current) { count++; }
		}
		if (count == k-1)
			cout << current << endl;
	}
	return 0;
}
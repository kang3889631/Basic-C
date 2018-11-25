#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		int count = 0;
		cin >> num;
		while (num > 0) {
			count += num % 2;
			num /= 2;
		}
		cout << count << endl;
	}

	return 0;
}
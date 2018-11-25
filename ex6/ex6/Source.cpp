#include <iostream>
using namespace std;

int main() {
	int k, countOne = 0, countFive = 0, countTen = 0;
	cin >> k;

	for (int i = 0; i < k; i++) {
		int n;
		cin >> n;
		if (n == 1) {
			countOne++;
		}
		if (n == 5) {
			countFive++;
		}
		if (n == 10) {
			countTen++;
		}
	}
	cout << countOne << endl;
	cout << countFive << endl;
	cout << countTen << endl;
	return 0;
}
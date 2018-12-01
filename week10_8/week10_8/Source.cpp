#include <iostream>
using namespace std;

int main() {
	int L = 0, M = 0, result = 0;
	int a[100][2];
	int tree[10000] = { 0 };
	cin >> L >> M;
	for (int i = 0; i < M; i++) {
		cin >> a[i][0] >> a[i][1];
	}

	for (int i = 0; i <= L; i++) {
		tree[i] = 1;
	}
	for (int i = 0; i < M; i++) {
		for (int j = a[i][0]; j <= a[i][1]; j++) {
			tree[j] = 0;
		}
	}
	for (int i = 0; i <= L; i++) {
		if (tree[i] == 1)
			result++;
	}
	cout << result << endl;
	return 0;
}
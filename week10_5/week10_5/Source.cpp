#include <iostream>
using namespace std;
int main()
{
	int n = 0, count = 0;
	int a[100][100];

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			bool x1 = a[i - 1][j] - a[i][j] >= 50; //up
			bool x2 = a[i + 1][j] - a[i][j] >= 50;; //down
			bool x3 = a[i][j - 1] - a[i][j] >= 50;; //left
			bool x4 = a[i][j + 1] - a[i][j] >= 50;; //right
			if (x1&&x2&&x3&&x4)
				count++;
		}
	}
	cout << count << endl;
	return 0;
}
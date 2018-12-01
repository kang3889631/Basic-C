#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int n = 0;
	double a[1000][2];
	double dis = 0;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> a[i][0] >> a[i][1];
		}

		for (int j = 0; j < n - 1; j++) {
			for (int i = j; i < n - 1; i++) {
				if (dis < sqrt(pow(a[i][0] - a[i + 1][0], 2.0) + pow(a[i][1] - a[i + 1][1], 2.0)))
					dis = sqrt(pow(a[i][0] - a[i + 1][0], 2.0) + pow(a[i][1] - a[i + 1][1], 2.0));
			}
		}

		cout << fixed << setprecision(4) << dis << endl;
	}
	return 0;
}
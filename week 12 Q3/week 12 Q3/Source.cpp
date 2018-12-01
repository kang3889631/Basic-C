#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int n = 0;
	double a[1000][2];
	double dis = 0, maxDis = 0;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> a[i][0] >> a[i][1];
		}

		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				dis = sqrt(pow(a[i][0] - a[j][0], 2.0) + pow(a[i][1] - a[j][1], 2.0));
				if (maxDis < dis)
					maxDis = dis;
			}
		}

		cout << fixed << setprecision(4) << maxDis << endl;
	}
	return 0;
}
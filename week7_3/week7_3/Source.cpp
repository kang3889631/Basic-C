#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int n;
	double c1 = 0, c2 = 0, c3 = 0, c4 = 0, total = 0;
	int a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < 19) {
			c1++;
		}
		else if (a[i] < 36) {
			c2++;
		}
		else if (a[i] < 61) {
			c3++;
		}
		else {
			c4++;
		}
	}
	total = c1 + c2 + c3 + c4;
	cout << "1-18: " << fixed << setprecision(2) << c1 / total * 100 << "%" << endl;
	cout << "19-35: " << fixed << setprecision(2) << c2 / total * 100 << "%" << endl;
	cout << "36-60: " << fixed << setprecision(2) << c3 / total * 100 << "%" << endl;
	cout << "60-: " << fixed << setprecision(2) << c4 / total * 100 << "%" << endl;
	return 0;
}
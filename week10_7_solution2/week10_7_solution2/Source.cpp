#include<iostream>

#include<algorithm>

using namespace std;

int n, i, a[15000], t;

int searchMiddle(int);

int main()

{
	while (cin >> n&&n != 0)
	{
		for (i = 0; i < n; i++)
			cin >> a[i];
		if (n % 2 == 0)
		{
			t = searchMiddle(n / 2 - 1) + searchMiddle(n / 2);
			t = t / 2;

		}
		else
			t = searchMiddle(n / 2);
		cout << t << endl;

	}
	return 0;

}

int searchMiddle(int r) {

	for (int c = 0; c < n; c++) {

		int number = 0, equal = 0;

		for (int b = 0; b < n; b++) {

			if (c != b&&a[c] > a[b]) {

				number++;

			}

			if (c != b&&a[c] == a[b]) {

				equal++;

			}

		}

		if (equal == 0) {

			if (number == r) {

				return a[c];

			}

		}
		else {

			for (int d = 0; d <= equal; d++) {

				if (number + d == r) {
					return a[c];
				}
			}
		}
	}
	return 0;

}
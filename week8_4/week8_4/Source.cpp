#include<iostream>
using namespace std;

int main()
{
	double n, k;
	while (cin >> n >> k)
	{
		double price = 200;
		bool success = 0;
		for (int i = 1; i <= 20; i++) {
			if (n*i >= price) {
				success = 1;
				cout << i << endl;
				break;
			}
			price *= 1 + k / 100;
		}
		if (success == 0)
			cout << "Impossible" << endl;
	}
	return 0;
}
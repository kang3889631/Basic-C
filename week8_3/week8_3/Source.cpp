#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double a[100];
	double bike, walk;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		bike = a[i] / 3.0 + 50;
		walk = a[i] / 1.2;
		if (bike > walk)
			cout << "Walk" << endl;
		else if (bike < walk)
			cout << "Bike" << endl;
		else
			cout << "All" << endl;
	}
	return 0;
}
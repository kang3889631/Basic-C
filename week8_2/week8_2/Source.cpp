#include <iostream>
using namespace std;
int main()
{
	int a[6];
	int result = 0;
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
	}

	for (int i = 1; i < 6; i++) {
		a[i]<a[0] ? result += a[i] : result = result;
	}
	cout << result << endl;
	return 0;
}
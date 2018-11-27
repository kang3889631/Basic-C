#include <iostream>
using namespace std;

int main() {
	int n, x, y;
	cin >> n >> x >> y;
	y%x == 0 ? cout << n - y / x : cout << n - y / x - 1;
	return 0;
}
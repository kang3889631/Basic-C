#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	bool decision = 0;
	cin >> n;
	if (n % 4 == 0)
		decision = 1;
	if (n % 100 == 0)
		decision = 0;
	if (n % 400 == 0)
		decision = 1;

	decision == 1 ? cout << "Y" << endl : cout << "N" << endl;
	return 0;
}
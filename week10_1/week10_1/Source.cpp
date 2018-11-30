#include <iostream>
using namespace std;
int main()
{
	char s[80];
	int a[5] = { 0 };
	cin.getline(s, 80);
	for (int i = 0; i<80; i++) {
		if (s[i] == 'a')
			a[0]++;
		if (s[i] == 'e')
			a[1]++;
		if (s[i] == 'i')
			a[2]++;
		if (s[i] == 'o')
			a[3]++;
		if (s[i] == 'u')
			a[4]++;

	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
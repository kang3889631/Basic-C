#include <iostream>
using namespace std;
int main()
{
	char a[80];
	char b[80];
	int i = 0;
	cin.getline(a, 80);
	cin.getline(b, 80);
	for (int i = 0; i < 80; i++) {
		if (a[i] >= 65 && a[i] <= 90) { a[i] += 32; }
		if (b[i] >= 65 && b[i] <= 90) { b[i] += 32; }
	}
	while (a[i] != '\0' && (a[i] == b[i])) {
		i++;
	}
	if (a[i]>b[i]) {
		cout << ">" << endl;
	}
	else if (a[i]<b[i]) {
		cout << "<" << endl;
	}
	else {
		cout << "=" << endl;
	}
	return 0;
}
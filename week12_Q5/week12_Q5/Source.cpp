#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[11], substr[3];
	while (cin >> str >> substr) {
		int location = 0;
		int max = str[0];
		//cout << strlen(str) << endl;

		//find Max ASCII charactor in str

		for (int i = 1; i < strlen(str); i++) {
			if (max < str[i])
				max = str[i];
		}

		//find location of First Max charactor in str
		for (int i = 0; i < strlen(str); i++) {
			if (max == str[i]) {
				location = i;
				break;
			}
		}

		for (int i = 0; i <= location; i++) {
			cout << str[i];
		}

		cout << substr;

		for (int i = location + 1; i < strlen(str); i++) {
			cout << str[i];
		}
		cout << endl;
	}

	return 0;
}
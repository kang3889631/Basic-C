#include <iostream>
using namespace std;
int main()
{
	char input[500];
	cin.getline(input, 500);
	int i = 0, j = 0, max, count = 0;
	int a[500];

	while (input[i] != '.') {
		if (input[i] == ' ') {
			a[j++] = i;
		}
		i++;
	}
	a[j] = i;
	max = a[0];
	for (int k = 0; k < j; k++) {
		max < a[k + 1] - a[k] - 1 ? max = a[k + 1] - a[k] - 1 : max = max;
	}
	//cout<<"max = "<<max<<endl;
	if (max == a[0]) {
		for (int k = 0; k < max; k++) {
			cout << input[k];
		}
	}
	else {
		for (count = 0; count < j; count++) {
			if (max == a[count + 1] - a[count] - 1) {
				//cout << a[count+1]<<" "<<a[count]<<" "<<max<<endl;
				break;
			}
		}
		for (int k = a[count] + 1; k < a[count + 1]; k++) {
			cout << input[k];
		}
	}

	return 0;
}
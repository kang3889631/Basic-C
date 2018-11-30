#include <iostream>
#include <iomanip>
using namespace std;
# define N 5
int main()
{
	int a[N][N];
	int n = 0, m = 0, tmp;
	bool n_inside = 0, m_inside = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a[i][j];
		}
	}
	cin >> n >> m;

	//check n,m
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (a[i][j] == n)
				n_inside = 1;
			if (a[i][j] == m)
				m_inside = 1;
		}
	}
	if (n_inside&&m_inside) {
		for (int i = 0; i < N; i++) {
			tmp = a[n][i];
			a[n][i] = a[m][i];
			a[m][i] = tmp;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << setw(4) << a[i][j]; //setw() is in <iomanip>
			}
			cout << endl;
		}
	}
	else {
		cout << "error" << endl;
	}
	return 0;
}
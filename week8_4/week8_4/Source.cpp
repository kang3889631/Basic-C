#include<iostream>
using namespace std;

int main()
{
	float N, K;
	int y = 0;
	while (cin >> N >> K)
	{
		float p = 200.00;
		for (y = 1; y <= 20; y++)
		{
			if (y*N >= p)
			{
				cout << y << endl;
				goto loop;
			}
			else if (y*N < p)
				p = p *(1 + 0.01*K);
		}
		cout << "impossible" << endl;
	loop:;
		y = 0;
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int x = 1, y = 1, z = 1, t = 0, sum = 0;
	cin >> t;
	if (t<4) cout << '1';
	else {
		for (int i = 0; i<t - 3; i++)
		{
			sum = x + z;
			x = y;
			y = z;
			z = sum;
		}
		cout << sum;
	}
	return 0;
}

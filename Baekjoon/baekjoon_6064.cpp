#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>

using namespace std;

int gcd(int a, int b)
{
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	while (b != 0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}

	return a;
}

int lc(int x, int y)
{
	return (x*y) / gcd(x, y);
}

int main()
{
	int T;
	
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int m, n, x, y;
		cin >> m >> n >> x >> y;
		
		int lcd = lc(m, n);

		while (x != y && x <= lcd)
		{
			if (x < y)
				x += m;
			else
				y += n;
		}

		if (x != y)
			cout << "-1" << endl;
		else
			cout << x << endl;
	}
	
}

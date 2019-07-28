#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int T;

int gcd(int a, int b)
{
	int tmp;
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	while (b != 0)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}

	return a;
}

int lcd(int a, int b)
{
	return a * b / gcd(a, b);
}
int main()
{
	cin >> T;

	while (T--)
	{
		int a, b;
		cin >> a >> b;
		cout << lcd(a, b) << " " << gcd(a, b) << endl;
	}
}
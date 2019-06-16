#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <functional>

using namespace std;

int T;

int main()
{
	cin >> T;
	while (T--)
	{
		int d, n, s, p;
		cin >> d >> n >> s >> p;
		int par = d + n * p;
		int ser = n * s;

		if (par < ser)
			cout << "parallelize" << endl;
		else if (par > ser)
			cout << "do not parallelize" << endl;
		else
			cout << "does not matter" << endl;
	}
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N;

int main()
{
	while (1)
	{
		cin >> N;
		if (N == 0)
			break;

		if (N > 1000000)
		{
			if (N > 5000000)
				cout << N * 80 / 100 << endl;
			else
				cout << N * 90 / 100 << endl;
		}
		else
			cout << N << endl;
	}
}


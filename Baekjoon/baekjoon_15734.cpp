#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int L, R, A;

int main()
{
	cin >> L >> R >> A;

	while (A > 0)
	{
		if (L <= R)
		{
			A--;
			L++;
		}
		else
		{
			A--;
			R++;
		}
	}

	cout << min(L, R) * 2 << endl;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N, L;
int cnt = 0;
int start = 1;

int main()
{
	cin >> N >> L;

	while (1)
	{
		int temp = start;
		bool ck = true;

		while (temp)
		{
			if (temp % 10 == L)
			{
				ck = false;
				break;
			}
			temp /= 10;
		}

		if (ck)
			cnt++;

		if (cnt == N)
		{
			cout << start << endl;
			return 0;
		}

		start++;
	}
}


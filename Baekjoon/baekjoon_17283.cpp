#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int cnt = 1;
int sum = 0;
double L, R;

int main()
{
	cin >> L >> R;
	
	while (1)
	{
		L = floor(L * (R / 100));
		cnt *= 2;

		if (L <= 5)
			break;

		sum += L * cnt;
	}
	
	cout << sum << endl;
}
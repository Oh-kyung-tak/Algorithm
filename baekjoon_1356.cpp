#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
string s;
int len;

int main()
{
	cin >> s;

	len = s.size();

	if (len == 1)
	{
		printf("NO");
		return 0;
	}

	for (int i = 1; i < len; i++)
	{
		int r1 = 1, r2 = 1;
		for (int j = 0; j < i; j++)
		{
			r1 *= (s[j] - '0');
		}
		for (int k = i; k < len; k++)
		{
			r2 *= (s[k] - '0');
		}
		if (r1 == r2)
		{
			printf("YES");
			return 0;
		}
	}

	printf("NO");
}

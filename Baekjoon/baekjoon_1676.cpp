#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <set>
#include <math.h>

using namespace std;
int N;
int cnt;

int main()
{
	cin >> N;

	for (int i = 0; i <= N; i++)
	{
		if (i % 5 == 0)
		{
			int num = i;
			while (num % 5 == 0 && num > 0)
			{
				cnt++;
				num /= 5;
			}
		}
	}

	cout << cnt << endl;
}

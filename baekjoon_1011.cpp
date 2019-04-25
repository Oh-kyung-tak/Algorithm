#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		long long int x, y;
		long long int dis;
		long long int cnt = 1;
		long long int xx = 0;
		cin >> x >> y;
		dis = y - x;

		while (1)
		{
			if (dis <= (cnt * cnt) - cnt)
				break;
			xx++;
			if (dis <= cnt * cnt)
				break;
			xx++;
			cnt++;
		}

		cout << xx << endl;
	}
}

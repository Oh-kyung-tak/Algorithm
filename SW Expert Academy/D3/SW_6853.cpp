#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <string.h>

using namespace std;

int N;
int cnt[3];

int main() 
{
	cin >> N;

	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		memset(cnt, 0, sizeof(cnt));

		int x1, y1, x2, y2;
		int num;

		cin >> x1 >> y1 >> x2 >> y2;
		cin >> num;
		
		for (int i = 0; i < num; i++)
		{
			int x, y;
			cin >> x >> y;

			if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
			{
				if (x == x1 || x == x2 || y == y1 || y == y2)
					cnt[1]++;
				else
					cnt[0]++;
			}
			else
				cnt[2]++;
		}

		cout << "#" << Test_case << " " << cnt[0] << " " << cnt[1] << " " << cnt[2] << endl;
	}
}
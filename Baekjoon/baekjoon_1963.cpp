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
int N;
int startnum, finalnum;
bool suso[10001];
int visited[10001];

void check_num(int num)
{
	int cnt = 0;
	queue<int> q;
	q.push(num);
	visited[num] = cnt;
	cnt++;

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0; i < size; i++)
		{
			int num = q.front();
			q.pop();

			for (int j = 0; j < 4; j++)
			{
				string numTostr = to_string(num);

				for (int k = 0; k < 10; k++)
				{
					numTostr[j] = k + '0';
					int strTonum = atoi(numTostr.c_str());
					if (strTonum >= 1000 && strTonum <= 9999 && visited[strTonum] == -1 && suso[strTonum])
					{
						q.push(strTonum);
						visited[strTonum] = cnt;
					}
				}
			}
		}
		cnt++;
	}
}
int main()
{
	memset(suso, true, sizeof(suso));

	for (int i = 2; i <= sqrt(10001); i++)
	{
		for (int j = i * i; j <= 10001; j += i)
		{
			if (suso[j])
				suso[j] = false;
		}
	}
	
	cin >> N;

	while (N--)
	{
		memset(visited, false, sizeof(visited));
		memset(visited, -1, sizeof(visited));
		cin >> startnum >> finalnum;

		check_num(startnum);
		cout << visited[finalnum] << endl;
	}
}
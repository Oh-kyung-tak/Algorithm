#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>

using namespace std;

int status[102];
int N, M;
int main()
{
	memset(status, -1, sizeof(status));

	cin >> N;
	
	for (int i = 1; i <= N; i++)
		cin >> status[i];
	
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;

		if (x == 1)
		{
			for (int j = y; j <= N; j += y)
			{
			
				if (status[j] == 1)
					status[j] = 0;
				else
					status[j] = 1;
				
			}
		}
		else
		{
			int startnum = y;
			int lastnum = y;

			while (status[startnum] == status[lastnum])
			{
				if (startnum <= 1 || lastnum >= N)
					break;

				startnum--;
				lastnum++;

				if (status[startnum] != status[lastnum])
				{
					startnum++;
					lastnum--;
					break;
				}
			}

			for (int j = startnum; j <= lastnum; j++)
			{
				if (status[j] == 1)
					status[j] = 0;
				else
					status[j] = 1;
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		cout << status[i] << " ";
		if (i % 20 == 0)
			cout << endl;
	}
	
}

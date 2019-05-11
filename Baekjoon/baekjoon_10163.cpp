#include<iostream>
#include<set>
#include<algorithm>
#include<string.h>
#include<vector>
#include<map>

using namespace std;
int paper[102][102];
int cnt = 1;

int N;

int main()
{
	cin >> N;

	memset(paper, 0, sizeof(paper));

	for (int i = 0; i < N; i++)
	{
		int x1, y1;
		int w, h;

		cin >> x1 >> y1 >> w >> h;
		
		for (int j = x1; j < x1 + w; j++)
		{
			for (int k = y1; k < y1 + h; k++)
				paper[j][k] = cnt;
		}
		cnt++;
	}

	for (int i = 1; i <= N; i++)
	{
		int cnt = 0;

		for (int j = 0; j < 102; j++)
		{
			for (int k = 0; k < 102; k++)
				if (paper[j][k] == i)
					cnt++;
		}

		cout << cnt << endl;
	}
}

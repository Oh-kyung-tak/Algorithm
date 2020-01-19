#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <set>

using namespace std;

struct robot {
	int x;
	int y;
	int dir;
};

//E 0 S 1 W 2 N 3
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,-1,0,1 };

int A, B;
int N, M;
int map[101][101];
vector<robot> v;

int main()
{
	cin >> A >> B;
	cin >> N >> M;

	//0번 초기화 해주기
	v.push_back({ 0,0,0 });

	for (int i = 1; i <= N; i++)
	{
		int a, b;
		char c;
		cin >> a >> b >> c;
		if (c == 'E') v.push_back({ a,b,0 });
		else if (c == 'S') v.push_back({ a,b,1 });
		else if (c == 'W') v.push_back({ a,b,2 });
		else v.push_back({ a,b,3 });

		map[a][b] = i;
	}

	for (int i = 0; i < M; i++)
	{
		int num, cnt;
		char w;
		cin >> num >> w >> cnt;

		if (w == 'F')
		{
			for (int i = 0; i < cnt; i++)
			{
				int xx = v[num].x + dx[v[num].dir];
				int yy = v[num].y + dy[v[num].dir];
				if (xx < 1 || yy < 1 || xx > A || yy > B)
				{
					cout << "Robot " << num << " crashes into the wall" << endl;
					return 0;
				}

				if (map[xx][yy] != 0)
				{
					cout << "Robot " << num << " crashes into robot " << map[xx][yy] << endl;
					return 0;
				}

				map[v[num].x][v[num].y] = 0;
				v[num].x = xx;
				v[num].y = yy;
				map[xx][yy] = num;
 			}
		}
		else
		{
			cnt %= 4;
			if (w == 'L')
			{
				while (cnt)
				{
					v[num].dir = (v[num].dir == 0) ? 3 : v[num].dir - 1;
					cnt--;
 				}
			}
			else
			{
				while (cnt)
				{
					v[num].dir = (v[num].dir == 3) ? 0 : v[num].dir + 1;
					cnt--;
				}

			}
		}
	}

	cout << "OK" << endl;
}
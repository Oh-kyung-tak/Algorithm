#include <iostream>
#include <vector>
using namespace std;

#define INF 987654321

//벨만-포드 알고리즘
int T;
int N, M, W;


int main()
{
	cin >> T;

	while (T--)
	{
		vector<pair<int, int>> v[501];
		int dist[501];
		bool cycle = false;

		cin >> N >> M >> W;

		for (int i = 0; i < M; i++)
		{
			int a, b, c;
			cin >> a >> b >> c;
			v[a].push_back({ b, c });
			v[b].push_back({ a, c });
		}

		for (int i = 0; i < W; i++)
		{
			int a, b, c;
			cin >> a >> b >> c;
			v[a].push_back({ b, -c });
		}

		for (int i = 1; i <= N; i++)
			dist[i] = INF;

		dist[1] = 0;

		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				for (auto &n : v[j])
				{
					if (dist[j] != INF && dist[n.first] > n.second + dist[j])
					{
						dist[n.first] = n.second + dist[j];
						if (i == N)
							cycle = true;
					}
				}
			}
		}

		if (cycle)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
}
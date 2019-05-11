#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int N, K;
int cnt = 0;
bool visited[1001];

int main()
{
	
	cin >> N >> K;
	for (int i = 2; i <= 1000; i++)
		visited[i] = 1;

	for (int i = 2; i <= N; i++)
	{
		if(visited[i] == 1)
		{
			visited[i] = 0;
			cnt++;

			if (cnt == K)
			{
				cout << i << endl;
				return 0;
			}

			for (int j = i + i; j <= N; j += i)
			{
				if (visited[j] == 1)
				{
					visited[j] = 0;
					cnt++;
				}
				
				if (cnt == K)
				{
					cout << j << endl;
					return 0;
				}
			}
		}
	}
}

#include <stdio.h>
#include <queue>
using namespace std;

int N;
int edge[101][101];
int reach[101][101];

int main(void) {
	
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) 
		for (int j = 1; j <= N; j++)
			scanf("%d", &edge[i][j]);
	
	for (int st = 1; st <= N; st++) 
	{
		int isVisited[101] = { 0, };
		queue<int> q;
		q.push(st);
		while (!q.empty()) 
		{
			int cur = q.front();
			q.pop();
			for (int i = 1; i <= N; i++) 
			{
				if (edge[cur][i] && !isVisited[i]) 
				{
					q.push(i);
					reach[st][i] = 1;
					isVisited[i] = true;
				}
			}
		}
	}

	for (int i = 1; i <= N; i++) 
	{
		for (int j = 1; j <= N; j++) 
			printf("%d ", reach[i][j]);
		
		printf("\n");
	}
}

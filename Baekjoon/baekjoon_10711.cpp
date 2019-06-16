#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#define MAX 1001

//답안 예시 찾아봄
//시간 초과 걸리는 부분 생각해보기
//큐에 적용될 부분만 넣어서 적용하기 모든 숫자를 처음에 큐에 넣을 필요가 없다.

using namespace std;
typedef pair<int, int> node;

int n, m;
int ans;

char map[MAX][MAX];
int adjacent[MAX][MAX];
int visited[MAX][MAX];

int dx[8] = { 0,0,1,-1,1,1,-1,-1 };
int dy[8] = { 1,-1,0,0,-1,1,-1,1 };

queue<node> q, nq;

void getAdjacentSea() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// 모래성인 부분에서
			if (map[i][j] != '.') {
				// 8방향 탐색을 수행함
				for (int k = 0; k < 8; k++) {
					int nx = i + dx[k];
					int ny = j + dy[k];

					if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

					if (map[nx][ny] == '.') adjacent[i][j]++;
				}
				// 만약 '모래의 강도'보다 '인접한 바다의 수'가 많거나 같다면
				if (map[i][j] - '0' <= adjacent[i][j]) {
					q.push(node(i, j));
					visited[i][j] = 0;
				}
			}
		}
	}
}

void bfs() {
	// q  : 부서질 모래성을 저장하는 큐
	// nq : 모래성이 부서지면서 인접한 노드를 검사해 부서질 예정인 부분을 저장하는 큐
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		// 모래성이 부서짐
		map[x][y] = '.';
		adjacent[x][y] = 0;

		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

			if (map[nx][ny] != '.' && visited[nx][ny] == 1) {
				adjacent[nx][ny]++;

				if (map[nx][ny] - '0' <= adjacent[nx][ny]) {
					nq.push(node(nx, ny));
					visited[nx][ny] = 0;
				}
			}
		}

		// 부서질 모래성이 모두 부숴졌다면
		// 다음 부숴질 예정인 모래성이 담겨있는 nq 와 교환
		// 다 부수고 나서 ans+1 을 수행함
		if (q.empty()) {
			swap(q, nq);
			ans++;
		}
	}
}

int main(int argc, const char * argv[]) {
	// cin,cout 속도향상
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];

			if (map[i][j] != '.')
				visited[i][j] = 1;
		}
	}

	ans = 0;
	getAdjacentSea();
	bfs();
	cout << ans << "\n";

	return 0;
}
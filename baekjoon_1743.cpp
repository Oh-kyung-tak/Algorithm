#include <iostream>
#define TRASH   1
#define EMPTY   0
#define MIN_INF     (-98776321)
 
using namespace std;
int N, M, K;
int map[101][101];
bool isVisited[101][101];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
 
int dfs(int x, int y, int ret) {
    int nx=0, ny=0;
    isVisited[x][y] = true;
    for (int i=0; i<4; i++) {
        nx = x + dx[i];
        ny = y + dy[i];
        if (nx <= 0 || ny <= 0 || nx > N || ny > M || isVisited[nx][ny] || !map[nx][ny]) {
            continue;
        }
        ret = dfs(nx, ny, ret+1);
    }
    return ret;
}
 
 
int main(int argc, const char * argv[]) {
    cin >> N >> M >> K;
    int x, y, ret = MIN_INF;
    for (int i=0; i<K; i++) {
        cin >> x >> y;
        map[x][y] = TRASH;
    }
 
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=M; j++) {
            if (!isVisited[i][j] && map[i][j]) {
                ret = max(ret, dfs(i,j,1));
            }
        }
    }
    cout << ret << "\n";
    return 0;
}

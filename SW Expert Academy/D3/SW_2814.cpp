#include <iostream>
#include <vector>

using namespace std;
  
vector<vector<int> > v;
bool visit[11];
int T, N, M, ans;
  
void dfs(int start, int len) {
    if (ans < len) ans = len;
    visit[start] = true;
  
    for (int i : v[start]) {
        if (!visit[i]) {
            dfs(i, len + 1);
        }
    }
    visit[start] = false;
}
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        cin >> N >> M;
          
        v.resize(N + 1);
        for (int i = 0, x, y; i < M; i++) {
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for (int i = 1; i <= N; i++) {
            dfs(i, 1);
            fill(&visit[0], &visit[N], false);
        }
        v.clear();
        cout << "#" << tc << " " << ans << "\n";
        ans = 0;
    }
  
    return 0;
}
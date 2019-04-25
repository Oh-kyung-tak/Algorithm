#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

bool checking[100001];
int me, brother;

void bfs(int start) {
	queue<pair<int, int>> q;
	int time = 0;
	q.push(make_pair(start, time));
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		if (x == brother) {
			cout << y << "\n";
			break;
		}
		q.pop();
		if (2 * x <= 100000 && checking[2 * x] == false) {
			q.push(make_pair(2 * x, y));
			checking[2 * x] = true;
		}
		if (x - 1 >= 0 && checking[x - 1] == false) {
			q.push(make_pair(x - 1, y + 1));
			checking[x - 1] = true;
		}
		if (x + 1 <= 100000 && checking[x + 1] == false) {
			q.push(make_pair(x + 1, y + 1));
			checking[x + 1] = true;
		}
	}
}

int main() {

	cin >> me >> brother;

	bfs(me);

	return 0;
}

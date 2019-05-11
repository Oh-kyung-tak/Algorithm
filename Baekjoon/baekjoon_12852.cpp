#include <iostream>
#include <string.h>
#include <vector>
#include <queue>

using namespace std;

int v[1000000], Time, n;
queue<pair<int, vector<int>>> q;

void search() {
	int size = q.size();
	while (size--) {
		int now = q.front().first;
		vector<int> vv = q.front().second;
		q.pop();
		if (now == 1) {
			printf("%d\n", Time);
			for (int i = 0; i < vv.size(); i++)
				printf("%d ", vv[i]);
			return;
		}
		if (now % 3 == 0 && !v[now / 3]) 
			vv.push_back(now / 3), v[now / 3] = 1, q.push({ now / 3, vv }), vv.pop_back();
		if (now % 2 == 0 && !v[now / 2]) 
			vv.push_back(now / 2), v[now / 2] = 1, q.push({ now / 2, vv }), vv.pop_back();
		if (now - 1 >= 0 && !v[now - 1]) 
			vv.push_back(now - 1), v[now - 1] = 1, q.push({ now - 1, vv }), vv.pop_back();
	}
	Time++;
	search();
}

int main() 
{
	scanf("%d", &n);
	q.push({ n, vector<int> { n } });
	search();
}

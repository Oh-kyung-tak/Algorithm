#include<iostream>
#include<algorithm>

using namespace std;
int N, M, K, team;

int main()
{
	cin >> N >> M >> K;
	team = min((N + M - K) / 3, N / 2);

	team = min(team, M);
	cout << team << "\n";
	return 0;

}

#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int N;
int K;
vector<int> sensor;
vector<int> dist;
int ans = 0;

int main()
{
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		sensor.push_back(temp);
	}

	sort(sensor.begin(), sensor.end());

	int s_size = sensor.size();
	for (int i = 0; i < s_size - 1; i++)
		dist.push_back(sensor[i + 1] - sensor[i]);

	sort(dist.begin(), dist.end());
	
	int d_size = dist.size();
	for (int i = 0; i < d_size - K + 1; i++)
		ans += dist[i];

	cout << ans << endl;
}
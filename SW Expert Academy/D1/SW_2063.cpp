#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int N;
vector<int> v;

int main()
{
	cin >> N;

	for (int k = 1; k <= N; k++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());

	cout << v[N / 2] << endl;
}
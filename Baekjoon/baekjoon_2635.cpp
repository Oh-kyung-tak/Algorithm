#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N;
vector<int> ans;
int ans_size = 0;

vector<int> check(vector<int> v)
{
	while (1)
	{
		int len = v.size();
		int num = v[len - 2] - v[len - 1];
		if (num < 0)
			return v;

		v.push_back(num);
	}
}
int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		vector<int> temp = check({ N, i });

		int t_size = temp.size();
		if (ans_size < t_size)
		{
			ans = temp;
			ans_size = t_size;
		}
			
	}

	cout << ans.size() << endl;

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
}

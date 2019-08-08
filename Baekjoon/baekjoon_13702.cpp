#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N, M;
vector<int> v;
int s = 0;
int e;
int ans = 0;

int main()
{
	cin >> N >> M;
	
	
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
		e = max(e, temp);
	}
	
	while (s <= e)
	{
		int mid = (s + e) / 2;
		int cnt = 0;

		for (int i = 0; i < v.size(); i++)
			cnt += v[i] / mid;

		if (cnt >= M)
		{
			ans = max(ans, mid);
			s = mid + 1;
		}
		else
			e = mid - 1;
	}

	cout << ans << endl;
}


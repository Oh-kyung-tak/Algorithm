#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;
int N;
int ans = 0;
vector<int> v;
int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		if (v.size() == 0)
		{
			v.push_back(num);
			ans++;
		}
		else
		{
			if (v.back() < num)
			{
				v.push_back(num);
				ans++;
			}
			else
			{
				auto it = lower_bound(v.begin(), v.end(), num);
				*it = num;
			}
		}	
	}
	cout << ans << endl;
}



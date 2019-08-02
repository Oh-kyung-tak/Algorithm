#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int N;

stack<int> s;
vector<int> v;
vector<int> ans;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int tt;
		cin >> tt;
		v.push_back(tt);
	}
	
	s.push(-1);
		
	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (s.top() == -1)
		{
			ans.push_back(-1);
			s.push(v[i]);
		}
		else
		{
			while (1)
			{
				if (s.top() == -1)
				{
					ans.push_back(-1);
					s.push(v[i]);
					break;
				}

				if (s.top() > v[i])
				{
					ans.push_back(s.top());
					s.push(v[i]);
					break;
				}
				else
					s.pop();
			}
		}
	}

	for (int i = ans.size() - 1; i >= 0; i--)
		cout << ans[i] << " ";
}
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int N;
int main()
{
	cin >> N;

	while (N--)
	{
		priority_queue<int, vector<int>, less<int>> max_h;
		priority_queue<int, vector<int>, greater<int>> min_h;
		vector<int> v;
		int t;

		cin >> t;
		for (int i = 0; i < t; i++)
		{
			int temp;
			cin >> temp;

			if (max_h.empty())
				max_h.push(temp);
			else if (max_h.size() == min_h.size())
				max_h.push(temp);
			else
				min_h.push(temp);

			if (!max_h.empty() && !min_h.empty() && (max_h.top() > min_h.top()))
			{
				int t1 = max_h.top();
				int t2 = min_h.top();

				max_h.pop();
				min_h.pop();

				max_h.push(t2);
				min_h.push(t1);
			}

			if (i % 2 == 0)
				v.push_back(max_h.top());
		}
		
		cout << v.size() << endl;
		for (int j = 0; j < v.size(); j++)
		{
			cout << v[j] << " ";
			if (j % 10 == 9)
				cout << endl;
		}
		cout << endl;
		
	}
	
}
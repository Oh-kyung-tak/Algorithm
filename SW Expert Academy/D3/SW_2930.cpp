#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>
#include <queue>

using namespace std;

int T;
bool mem[1000001];

int main()
{
	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		priority_queue<int, vector<int>, less<int>> pq;
		vector<int> v;
		int N;
		int cnt;
		bool ck = true;
		cin >> N;

		for (int i = 0; i < N; i++)
		{
			int num;

			cin >> num;

			if (num == 1)
			{
				int temp;
				cin >> temp;
				pq.push(temp);
			}
			else
			{
				if (pq.size() == 0)
					v.push_back(-1);
				else
				{
					v.push_back(pq.top());
					pq.pop();
				}
				
			}
				
		}
		cout << "#" << Test_case << " ";
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << endl;
	}
}
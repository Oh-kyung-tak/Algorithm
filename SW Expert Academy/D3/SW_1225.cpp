#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;
int T, test_case;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (test_case = 0; test_case < 10; test_case++)
	{
		deque<int> q;
		int N;
		int cnt = 1;
		cin >> N;

		for (int i = 0; i < 8; i++)
		{
			int num;
			cin >> num;
			q.push_back(num);
		}
		
		while (1)
		{
			int temp = q.front();
			q.pop_front();

			if (cnt > 5)
				cnt = 1;

			if (temp - cnt <= 0)
			{
				q.push_back(0);
				break;
			}
			else 
				q.push_back(temp - cnt);
			
			cnt++;
		}
		cout << "#" << test_case  + 1<< " ";
		while (!q.empty())
		{
			cout << q.front() << " ";
			q.pop_front();
		}
		cout << endl;
	}

	return 0;
}
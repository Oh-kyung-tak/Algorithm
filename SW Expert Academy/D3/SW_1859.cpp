#include <iostream>
#include <stack>

using namespace std;

int N;

int main()
{
	cin >> N;

	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		int num;
		stack<int> s;
		long long sum = 0;

		int max;

		cin >> num;

		for (int i = 0; i < num; i++)
		{
			int temp;
			cin >> temp;
			s.push(temp);
		}

		max = s.top();
		s.pop(); 

		while (!s.empty())
		{
			if (s.top() < max)
			{
				sum += max - s.top();
				s.pop();
			}
			else
			{
				max = s.top();
				s.pop();
			}
		}

		cout << "#" << Test_case << " " << sum << endl;
	}
}
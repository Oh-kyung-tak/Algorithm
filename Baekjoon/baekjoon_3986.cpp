#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>
#include <stack>

using namespace std;

int N;
int cnt = 0;

int main()
{
	cin >> N;
	
	while (N--)
	{
		string temp;
		stack<char> s;
		
		cin >> temp;
		int size = temp.size();

		for (int i = 0; i < size; i++)
		{
			if (s.empty())
				s.push(temp[i]);
			else
			{
				if (s.top() == temp[i])
					s.pop();
				else
					s.push(temp[i]);
			}
		}

		if (s.empty())
			cnt++;
	}

	cout << cnt << endl;
}
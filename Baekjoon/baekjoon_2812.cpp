#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
using namespace std;

vector<char> v;
deque<char> q;
string word;
int K, N;
int size;
int main()
{
	cin >> K >> N >> word;

	for (int i = 0; i < word.size(); i++)
		v.push_back(word[i]);

	q.push_back(word[0]);

	for (int i = 1; i < v.size(); i++)
	{
		if (q.back() < v[i])
		{
			if (N > 0)
			{
				while (1)
				{
					if (N == 0 || q.empty() || q.back() >= v[i])
						break;
					q.pop_back();
					N--;
				}
				q.push_back(v[i]);
			}
			else
				q.push_back(v[i]);
		}
		else
			q.push_back(v[i]);
	}

	while (N != 0)
	{
		N--;
		q.pop_back();
	}

	int size = q.size();

	{
		for (int i = 0; i < size; i++)
		{
			cout << q.front();
			q.pop_front();
		}
	}
}
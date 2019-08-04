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

int main()
{
	while (1)
	{
		cin >> N;
		vector<string> top;
		vector<string> bottom;

		int top_size;
		int bottom_size;

		if (N == 0)
			break;

		if (N % 2 == 1)
		{
			top_size = N / 2 + 1;
			bottom_size = N / 2;
		}
		else
		{
			top_size = N / 2;
			bottom_size = N / 2;
		}

		for (int i = 1; i <= N; i++)
		{
			string word;
			cin >> word;

			if (top_size >= i)
				top.push_back(word);
			else
				bottom.push_back(word);
		}
		
		for (int i = 0; i < bottom.size(); i++)
		{
			cout << top[i] << endl;
			cout << bottom[i] << endl;
		}

		if(top_size != bottom_size)
			cout << top[top.size() - 1] << endl;
	}
}
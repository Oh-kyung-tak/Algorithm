#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;

	for (int i = 0; i < arr1.size(); i++)
	{
		vector<int> tmp;
		string ss;

		int c = arr1[i] | arr2[i];

		while (c)
		{
			tmp.push_back(c % 2);
			c /= 2;
		}

		int size = n - tmp.size();

		for (int i = 0; i < size; i++)
			tmp.push_back(0);

		reverse(tmp.begin(), tmp.end());

		for (int i = 0; i < tmp.size(); i++)
		{
			if (tmp[i] == 1)
				ss += '#';
			else
				ss += ' ';
		}
			
		answer.push_back(ss);
	}

	return answer;
}
#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>

using namespace std;

int N, K;
string word;
vector<int> v;
string temp;

int main()
{
	cin >> N >> K;
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if ((word[i] >= '0' && word[i] <= '9') || word[i] == '-')
			temp += word[i];
		else
		{
			v.push_back(stoi(temp));
			temp = "";
		}

		if (word.size() - 1 == i)
			v.push_back(stoi(temp));
	}

	while (K--)
	{
		vector<int> temp;
		for (int i = 0; i < v.size() - 1; i++)
			temp.push_back(v[i + 1] - v[i]);
		
		v = temp;
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (i == v.size() - 1)
			cout << v[i];
		else
			cout << v[i] << ",";
	}
}
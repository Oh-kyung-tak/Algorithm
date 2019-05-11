#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <math.h>

using namespace std;

int main()
{
	string word;
	cin >> word;

	int size = word.size();
	int R, C;

	for (int i = 1; i <= sqrt(size); i++)
	{
		if (size % i == 0)
		{
			R = i;
			C = size / i;
		}
	}

	for (int i = 0; i < R; i++)
	{
		int first = i;
		for (int j = 0; j < C; j++)
		{
			cout << word[first];
			first += R;
		}
	}
}

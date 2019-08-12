#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

int N;
string word;
int bonus = 0;
int sum = 0;

int main()
{
	cin >> N;
	cin >> word;

	for (int i = 0; i < N; i++)
	{
		if (word[i] == 'O')
		{
			sum += i + 1 + bonus;
			bonus++;
		}
		else
			bonus = 0;
	}

	cout << sum << endl;
}


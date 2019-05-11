#include <iostream>
#include <map>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int N;
int people[11];

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;

		for (int j = 0; j < N; j++)
		{
			if (temp == 0 && people[j] == 0)
			{
				people[j] = i + 1;
				break;
			}
			else if (people[j] == 0)
				temp--;
		}
	}

	for (int i = 0; i < N; i++)
		cout << people[i] << " ";
}

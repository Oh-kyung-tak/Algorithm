#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>
#include<stack>
#include<math.h>

using namespace std;

bool visited[250000];
int N;

int main()
{
	for (int i = 2; i <= 10000; i++)
		visited[i] = true;

	for (int i = 2; i <= sqrt(10000); i++)
	{
		if (visited[i])
		{
			for (int j = i * i; j <= 10000; j += i)
				visited[j] = false;
		}
	}

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		int first, second;
		int min = 20000;
		cin >> temp;

		for (int j = 2; j <= temp; j++)
		{
			if (visited[j] == true && visited[temp - j] == true)
			{
				int x = j;
				int y = temp - j;
				if (min > abs(x - y))
				{
					first = x;
					second = y;
					min = abs(x - y);
				}
			}
		}

		cout << first << " " << second << endl;
	}
}

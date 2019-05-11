#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>

using namespace std;

int people[101];
int target[101];
int N, M;

int main()
{
	cin >> N;
	cin >> M;
	
	for (int i = 1; i <= M; i++)
		cin >> target[i];

	for (int i = 1; i <= M; i++)
	{
		int temptarget[101];
		int cnt = 0;

		for (int j = 1; j <= N; j++)
		{
			cin >> temptarget[j];

			if (temptarget[j] == target[i])
			{
				people[j]++;
				cnt++;
			}
		}
			
		people[target[i]] += N - cnt;
	}

	for (int i = 1; i <= N; i++)
		cout << people[i] << endl;
}

#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<vector>
#include<map>

using namespace std;

int people[7][2];
int N, K;
int sum = 0;

int main()
{
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		people[b][a]++;
	}

	for (int i = 1; i <= 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int temp = people[i][j];
			int cnt = temp / K;
			
			if (temp % K > 0)
				cnt++;

			sum += cnt;
		}
	}

	cout << sum << endl;
}

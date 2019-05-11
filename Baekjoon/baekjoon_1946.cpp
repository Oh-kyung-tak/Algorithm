#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int T;

int main()
{
	cin >> T;

	while (T--)
	{
		int N;
		int cut = 200000;
		int score[100001];
		int cnt = 0;

		cin >> N;
		memset(score, 0, sizeof(score));

		for (int i = 1; i <= N; i++)
		{
			int a, b;
			cin >> a >> b;
			score[a] = b;
		}

		for (int i = 1; i <= N; i++)
		{
			if (cut > score[i])
			{
				cut = score[i];
				cnt++;
			}
			if (cut == 1)
				break;
		}

		cout << cnt << endl;
	}
}

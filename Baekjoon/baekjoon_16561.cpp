#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

int num[1001];
int st = 3;
int n;
int cnt = 0;

//범위 제대로... 1001까지 있어야됨
int main()
{
	for (int i = 1; i <= 1000; i++)
	{
		num[i] = st;
		st += 3;
	}
	
	cin >> n;

	for (int i = 1; i <= 1000; i++)
	{
		for (int j = 1; j <= 1000; j++)
		{
			if (n - num[i] - num[j] > 0)
				cnt++;
		}
	}

	cout << cnt << endl;
}
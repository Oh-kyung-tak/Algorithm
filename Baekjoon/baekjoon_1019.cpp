#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

//생각의 전환 하기!!
using namespace std;

int N;
int num[10];
int start = 1;
int cnt = 1;
int e;

void check(int n)
{
	while (n)
	{
		num[n % 10] += cnt;
		n /= 10;
	}
}

int main()
{
	cin >> N;

	while (start <= N)
	{
		while (start % 10 != 0 && start <= N)
		{
			check(start);
			start++;
		}

		if (start > N)
			break;

		while (N % 10 != 9 && start <= N)
		{
			check(N);
			N--;
		}
		
		if (start > N)
			break;

		start /= 10;
		N /= 10;

		for (int i = 0; i <= 9; i++)
			num[i] += (N - start + 1) * cnt;

		cnt *= 10;
	}

	for (int i = 0; i <= 9; i++)
		cout << num[i] << " ";
}
#include <iostream>
#include <string>
#include <string.h>
#include <queue>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
int N;
int start_num[4] = { 2,3,5,7 };

bool check_suso(int num)
{
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return false;
	}

	return true;
}

void check_num(int num, int cnt)
{
	if (cnt == N)
	{
		printf("%d\n", num);
		return;
	}

	for (int i = 0; i <= 9; i++)
	{
		int temp = num * 10 + i;
		if (check_suso(temp))
			check_num(temp, cnt + 1);
	}
}

int main()
{
	cin >> N;

	for (int i = 0; i < 4; i++)
		check_num(start_num[i], 1);
	
	
}
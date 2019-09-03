#include <string>
#include <vector>

using namespace std;
int answer = 0;
int queen[13];
int cnt;

bool queen_ck(int num)
{
	for (int i = 0; i < num; i++)
	{
		if (queen[num] == queen[i] || abs(queen[num] - queen[i]) == abs(num - i))
			return false;
	}

	return true;
}

void check(int n)
{
	if (n == cnt)
		answer++;
	else
	{
		for (int i = 0; i < cnt; i++)
		{
			queen[n] = i;
			if (queen_ck(n))
				check(n + 1);
		}
	}
}

int solution(int n) {

	cnt = n;

	check(0);

	return answer;
}
#include <vector>
#include <math.h>

using namespace std;

bool suso[10000001];

long long solution(int N) {
	
	for (int i = 2; i <= sqrt(10000001); i++)
	{
		if (suso[i] == false)
		{
			for (int j = i * i; j <= 10000001; j += i)
				suso[j] = true;
		}
	}

	long long answer = 0;

	for (int i = 2; i <= N; i++)
	{
		if (!suso[i])
			answer += i;
	}

	return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool suso[1000001];

int solution(int n) {
	int answer = 0;

	for (int i = 2; i <= sqrt(1000001); i++)
	{
		if (!suso[i])
		{
			for (int j = i * i; j <= 1000000; j += i)
				suso[j] = true;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (!suso[i])
			answer++;
	}

	return answer;
}
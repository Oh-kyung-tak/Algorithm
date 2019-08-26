#include <string>
#include <vector>

using namespace std;

int solution(int num) {
	int answer = 0;
	int cnt = 0;
	long long int temp = num;

	while (1)
	{
		if (temp == 1)
		{
			answer = cnt;
			break;
		}

		if (cnt > 500)
		{
			answer = -1;
			break;
		}

		if (temp % 2 == 0)
			temp /= 2;
		else
			temp = (temp * 3) + 1;

		cnt++;
	}
	return answer;
}
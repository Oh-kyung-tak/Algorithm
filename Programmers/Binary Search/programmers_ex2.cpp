#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> times) {
	long long answer = 0;
	long long start = 0;
	long long end = 1000000000000000000;

	while (start <= end)
	{
		long long mid = (start + end) / 2;
		long long int cnt = 0;

		for (int i = 0; i < times.size(); i++)
			cnt += mid / times[i];

		cout << start << " " << end << " " << cnt << " " << n << endl;
		if (cnt >= n)
		{
			answer = mid;
			end = mid - 1;
		}
		else
			start = mid + 1;
	}

	return answer;
}
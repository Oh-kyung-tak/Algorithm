#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(int n) {
	int answer = 0;
	int cnt = 0;
	int two = 1;

	vector<int> v;
	
	while (n)
	{
		v.push_back(n % 2);
		n /= 2;
	}

	v.push_back(0);

	reverse(v.begin(), v.end());
	next_permutation(v.begin(), v.end());

	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (v[i] == 1)
			answer += two;

		two *= 2;
	}

	return answer;
}
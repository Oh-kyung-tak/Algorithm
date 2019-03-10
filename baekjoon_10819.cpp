#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <stack>
#include <math.h>

using namespace std;

int main()
{
	int num;
	int m = -1;

	scanf("%d", &num);
	vector<int> v(num);

	for (int i = 0; i < num; i++)
		scanf("%d", &v[i]);

	sort(v.begin(), v.end());

	do
	{
		int sum = 0;
		for (int i = 0; i < v.size() - 1; i++)
			sum += abs(v[i + 1] - v[i]);
		
		m = max(sum,m);
		
	} while (next_permutation(v.begin(), v.end()));

	printf("%d", m);
}

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

int arr[8001];
int N;
int sum;
int max_cnt = -1;
vector<int> v;
vector<int> v2;
int main()
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		sum += temp;
		v.push_back(temp);
		arr[temp + 4000]++;
	}

	sort(v.begin(), v.end());
	for (int i = 0; i <= 8000; i++)
		max_cnt = max(max_cnt, arr[i]);

	printf("%.0lf\n", double(sum) / double(N));
	printf("%d\n", v[N / 2]);
	
	for (int i = 0; i <= 8000; i++)
	{
		if (max_cnt == arr[i])
			v2.push_back(i);
	}

	if (v2.size() >= 2)
		printf("%d\n", v2[1] - 4000);
	else
		printf("%d\n", v2[0] - 4000);

	printf("%d\n", v[N - 1] - v[0]);
}

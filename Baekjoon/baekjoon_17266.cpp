#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int N, M;
vector<int> v;
int start = 0;
int max_ans = -1;

int main()
{
	cin >> N >> M;

	
	for (int i = 0; i < M; i++)
	{
		int temp;
		cin >> temp;
		if (i == 0)
			max_ans = max(max_ans, (temp - start));
		else
		{
			if((temp - start) % 2 == 0)
				max_ans = max(max_ans, (temp - start) / 2);
			else
				max_ans = max(max_ans, (temp - start) / 2 + 1);
		}
		start = temp;
	}

	max_ans = max(max_ans, N - start);

	cout << max_ans << endl;
}
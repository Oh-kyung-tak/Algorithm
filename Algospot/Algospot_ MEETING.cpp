#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>
#include <stack>

using namespace std;

int T;
int N;
vector<int> boy;
vector<int> girl;

int main()
{
	cin >> T;
	
	while (T--)
	{
		cin >> N;
		
		int ans = 0;
		boy.clear();
		girl.clear();

		for (int i = 0; i < N; i++)
		{
			int temp;
			cin >> temp;
			boy.push_back(temp);
		}

		for (int i = 0; i < N; i++)
		{
			int temp;
			cin >> temp;
			girl.push_back(temp);
		}

		sort(boy.begin(), boy.end());
		sort(girl.begin(), girl.end());

		for (int i = 0; i < N; i++)
			ans += abs(girl[i] - boy[i]);

		cout << ans << endl;
	}
}
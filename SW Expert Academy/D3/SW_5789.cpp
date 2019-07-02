#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
int box_num[1001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		memset(box_num, 0, sizeof(box_num));
		int N, Q;
		int cnt = 1;

		cin >> N >> Q;
		
		for (int i = 0; i < Q; i++)
		{
			int a, b;
			cin >> a >> b;
			for (int j = a; j <= b; j++)
				box_num[j] = cnt;

			cnt++;
		}

		cout << '#' << Test_case << " ";
		for (int i = 1; i <= N; i++)
			cout << box_num[i] << " ";
		cout << endl;
		
	}
}
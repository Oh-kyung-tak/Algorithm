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
		long long int N;
		int cnt = 1;
		bool ck = false;

		cin >> N; 

		for (long long int i = 1; i <= 1000000; i++)
		{
			long long int temp = i * i * i;
			if (temp >= N)
			{
				if (temp == N)
				{
					ck = true;
					cnt = i;
				}
				break;
			}
		}

		if (ck == false)
			cnt = -1;

		cout << '#' << Test_case << " " << cnt << endl;
		
	}
}
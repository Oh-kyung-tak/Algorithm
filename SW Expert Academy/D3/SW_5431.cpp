#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
bool people[101];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		memset(people, false, sizeof(people));

		int N, K;
		cin >> N >> K;

		for (int i = 0; i < K; i++)
		{
			int temp;
			cin >> temp;
			people[temp] = true;
		}

		cout << '#' << Test_case << " ";
		for (int i = 1; i <= N; i++)
			if (!people[i])
				cout << i << " ";
		cout << endl;
	}
}
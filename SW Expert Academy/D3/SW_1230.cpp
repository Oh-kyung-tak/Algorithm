#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;
int T, test_case;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (test_case = 0; test_case < 10; test_case++)
	{
		int N, M;

		vector<int> v;

		cin >> N;

		for (int i = 0; i < N; i++)
		{
			int tt;
			cin >> tt;
			v.push_back(tt);
		}
		
		cin >> M;

		for (int i = 0; i < M; i++)
		{
			char c;
			cin >> c;

			if (c == 'I')
			{
				int a, b;
				cin >> a >> b;
				
				for (int i = 0; i < b; i++)
				{
					int ttt;
					cin >> ttt;
					v.insert(v.begin() + a, ttt);
					a++;
				}
			}
			else if (c == 'D')
			{
				int a, b;
				cin >> a >> b;
				for (int i = 0; i < b; i++)
					v.erase(v.begin() + a - 1);
			}
			else
			{
				int a;
				cin >> a;

				for (int i = 0; i < a; i++)
				{
					int ttt;
					cin >> ttt;
					v.push_back(ttt);
				}
			}
		}
		
		cout << "#" << test_case  + 1<< " ";
		for (int i = 0; i < 10; i++)
			cout << v[i] << " ";
		cout << endl;
	}

	return 0;
}
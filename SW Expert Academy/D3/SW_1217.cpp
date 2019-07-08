#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;
int T, test_case;
int num[10];
vector<string> v;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (test_case = 0; test_case < 10; test_case++)
	{
		
		int N;
		int a, b;
		int cnt;
		cin >> N;

		cin >> a >> b;
		
		cnt = pow(a, b);

		cout << "#" << test_case + 1 << " " << cnt << endl;
	}

	return 0;
}
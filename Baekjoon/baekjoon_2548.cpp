#include <iostream>
#include <string>
#include <string.h>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
int N;
vector<int> v;

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	if (N % 2 == 0)
		cout << v[(N / 2) - 1] << endl;
	else
		cout << v[N / 2] << endl;
}

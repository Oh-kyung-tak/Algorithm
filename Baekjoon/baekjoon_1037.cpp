#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int N;

int main() 
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int nn;
		scanf("%d", &nn);
		v.push_back(nn);
	}
	sort(v.begin(), v.end());

	if (v.size() == 1)
		printf("%d", v[0]* v[0]);
	else
		printf("%d", v[0] * v[v.size() - 1]);
}

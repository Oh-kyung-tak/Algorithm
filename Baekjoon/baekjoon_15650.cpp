#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> v;
vector<int> v_index;

int N, M;

int main() 
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		v.push_back(i);

	for (int i = 1; i <= N; i++)
	{
		if (i <= M)
			v_index.push_back(1);
		else
			v_index.push_back(0);
	}
	
	do
	{
		for (int i = 0; i < N; i++)
		{
			if (v_index[i] == 1)
				cout << v[i] << " ";
		}
		cout << "\n";
	} while (prev_permutation(v_index.begin(), v_index.end()));

}

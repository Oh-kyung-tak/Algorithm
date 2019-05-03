#include <iostream>
#include <map>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> v;
int N;
int max_w = -1;
int v_size;
int vv;

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

	v_size = v.size();
	vv = v.size();

	for (int i = 0; i < v_size; i++)
	{
		max_w = max(max_w, vv * v[i]);
		vv--;
	}

	cout << max_w << endl;
}

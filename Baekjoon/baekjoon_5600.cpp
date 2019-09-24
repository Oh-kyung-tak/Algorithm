#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int error[305];
int a, b, c;
int N;

struct decision {
	int x;
	int y;
	int z;
};

vector<decision> v;

int main()
{ 
	for (int i = 1; i < 305; i++)
		error[i] = 2;

	cin >> a >> b >> c;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x, y, z, r;
		cin >> x >> y >> z >> r;
		
		if (r == 1)
		{
			error[x] = 1; error[y] = 1; error[z] = 1;
		}
		else
			v.push_back({ x,y,z });
	}

	for (int i = 0; i < v.size(); i++)
	{
		int cnt = 0;
		int t_error;

		if (error[v[i].x] != 1)
		{
			t_error = v[i].x;
			cnt++;
		}

		if (error[v[i].y] != 1)
		{
			t_error = v[i].y;
			cnt++;
		}

		if (error[v[i].z] != 1)
		{
			t_error = v[i].z;
			cnt++;
		}

		if (cnt == 1)
			error[t_error] = 0;
	}

	for (int i = 1; i <= a + b + c; i++)
		cout << error[i] << endl;
}
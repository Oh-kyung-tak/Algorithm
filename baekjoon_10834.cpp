#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<vector>
#include<map>

using namespace std;
int M, a = 1, b = 1;
int r = 1;
int r_num = 1;
int main()
{
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		r_num = (r_num / x) * y;
		r = z == 1 ? !r : r;
	}

	if (r)
		cout << "0 " << r_num;
	else
		cout << "1 " << r_num;
}

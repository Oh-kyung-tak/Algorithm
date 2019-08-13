#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

int main()
{
	while (1)
	{
		vector<int> v;
		int a, b, c;
		cin >> a >> b >> c;

		v.push_back(a);
		v.push_back(b);
		v.push_back(c);

		if (a == 0 && b == 0 && c == 0)
			break;

		sort(v.begin(), v.end());

		if (v[2] >= v[0] + v[1])
			cout << "Invalid" << endl;
		else
		{
			if (v[0] == v[1] && v[1] == v[2] && v[0] == v[2])
				cout << "Equilateral" << endl;
			else
			{
				if (v[0] == v[1] || v[1] == v[2] || v[0] == v[2])
					cout << "Isosceles" << endl;
				else
					cout << "Scalene" << endl;
			}
		} 
	}
}


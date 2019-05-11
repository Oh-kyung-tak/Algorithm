#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> v;
int mm;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	int b = v[2] - v[1];
	int a = v[1] - v[0];

	if (b == a)
		printf("%d", v[2] + b);
	else if (b > a)
		printf("%d", v[2] - a);
	else
		printf("%d", v[1] - b);

}

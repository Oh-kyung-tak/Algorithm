#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int N;
int A, B;
int C;
int sum;
int price;
int max_cal = 0;

vector<int> v;

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	cin >> A >> B;
	cin >> C;

	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end(), cmp);

	sum = C;
	price = A;
	max_cal = C / A;

	for (int i = 0; i < N; i++)
	{
		sum += v[i];
		price += B;
		max_cal = max(max_cal, sum / price);
	}

	cout << max_cal << endl;
}
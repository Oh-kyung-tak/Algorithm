#include <iostream>
#include <vector>

using namespace std;

int num[42] = { 0 };
int start = 1;
int cnt = 0;
int ans = 1;

int N, M;
vector<int> v;
bool seat[42];

int main()
{
	num[1] = 1;
	num[2] = 2;

	for (int i = 3; i <= 40; i++)
		num[i] = num[i - 2] + num[i - 1];
	

	cin >> N;
	cin >> M;
	
	for (int i = 0; i < M; i++)
	{
		int temp;
		cin >> temp;
		seat[temp] = true;
	}

	for (int i = 1; i <= N; i++)
	{
		if (seat[i]) 
		{
			if(cnt != 0)
				v.push_back(cnt);
			cnt = 0;
		}
		else
			cnt++;
	}

	if (cnt != 0)
		v.push_back(cnt);

	for (int i = 0; i < v.size(); i++)
		ans *= num[v[i]];

	cout << ans << endl;
}
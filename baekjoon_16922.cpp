#include<iostream>
#include<string>
#include<queue>

using namespace std;
int n;
queue<int> q;
int num[4] = { 1,5,10,50 };
bool visit[100000];
int cnt = 0;
int N;

void search(int loc, int current, int value)
{
	if (loc == N)
	{
		if (visit[value] == 0)
		{
			visit[value] = 1;
			cnt++;
		}
	}
	else
	{
		for (int i = current; i < 4; i++)
			search(loc + 1, i, value + num[i]);
	}
}
int main()
{
	cin >> N; 

	search(0,0,0);

	cout << cnt << endl;
}

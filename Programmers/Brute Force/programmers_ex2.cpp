#include <string>
#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>

using namespace std;

bool suso[1000001];
bool visited[10];
int cnt = 0;
string ss;

void dfs(string word)
{
	cout << word << endl;

	if (suso[stoi(word)] == false)
		cnt++;

	for (int i = 0; i < ss.size(); i++)
	{
		cout << i << " " << visited[i] << endl;
		if (visited[i] == false)
		{
			visited[i] = true;
			dfs(word + ss[i]);
			visited[i] = false;
		}
	}
}

int main()
{
	int answer = 0;
	suso[0] = true;
	suso[1] = true;

	cin >> ss;

	for (int i = 0; i < 10; i++)
		visited[i] = false;

	for (int i = 2; i <= sqrt(1000001); i++)
	{
		if (suso[i] == false)
		{
			for (int j = i * i; j <= 1000001; j += i)
				suso[j] = true;
		}
	}

	dfs("0");

	return answer;
}
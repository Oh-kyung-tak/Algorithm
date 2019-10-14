#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue> 
#include <string.h>
#include <string>
#include <map>

using namespace std;

int N, M;
int class_size[1010];
vector<int> temp[1010];
vector<int> submit[1010];

void gogo()
{
	for (int i = 1; i <= N; i++)
	{
		while (true)
		{
			int cl;
			cin >> cl;

			if (cl == -1)
				break;

			temp[cl].push_back(i);
		}
	}

	for (int i = 1; i <= M; i++)
	{
		int size = temp[i].size();
		if (size <= class_size[i])
		{
			for (int j = 0; j < size; j++)
				submit[temp[i][j]].push_back(i);
		}

		class_size[i] -= size;
		temp[i].clear();
	}
}

int main()
{
	cin >> N >> M;
	
	for (int i = 1; i <= M; i++)
		cin >> class_size[i];

	// 1차 수강신청
	gogo();
	// 2차 수강신청
	gogo();

	for (int i = 1; i <= N; i++)
	{
		sort(submit[i].begin(), submit[i].end());

		if (submit[i].size() == 0)
			cout << "망했어요";
		else
		{
			for (int j = 0; j < submit[i].size(); j++)
				cout << submit[i][j] << " ";
		}
		cout << endl;
	}
}
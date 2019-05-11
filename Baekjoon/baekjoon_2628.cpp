#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>

using namespace std;

int N, M;
int K;

vector<int> col;
vector<int> row;
int max_col = -1;
int max_row = -1;

int main()
{
	cin >> N >> M;
	col.push_back(0);
	col.push_back(N);
	row.push_back(0);
	row.push_back(M);
	
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		int a, b;
		cin >> a >> b;
		
		if (a == 0)
			row.push_back(b);
		else
			col.push_back(b);
	}

	sort(col.begin(), col.end());
	sort(row.begin(), row.end());

	for (int i = 0; i < col.size() - 1; i++)
		max_col = max(max_col, col[i + 1] - col[i]);
	
	for (int i = 0; i < row.size() - 1; i++)
		max_row = max(max_row, row[i + 1] - row[i]);

	cout << max_row * max_col << endl;
}

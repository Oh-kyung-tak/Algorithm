#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int N;
int CNN[1024][1024];

int second_max(int x, int y)
{
	vector<int> temp;

	for (int i = x; i < x + 2; i++)
		for (int j = y; j < y + 2; j++)
			temp.push_back(CNN[i][j]);

	sort(temp.begin(), temp.end());

	return temp[2];
}

int main()
{	
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> CNN[i][j];

	while (N != 1)
	{
		for(int i = 0; i < N; i += 2)
			for (int j = 0; j < N; j += 2)
				CNN[i / 2][j / 2] = second_max(i, j);
		
		N /= 2;
	}

	cout << CNN[0][0] << endl;
}
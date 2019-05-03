#include <iostream>
#include <map>
#include <string.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int arr_num[5001];
bool visited[400001];

int N;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr_num[i];
	
	int result = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (visited[arr_num[i] - arr_num[j] + 200000])
			{
				result++;
				break;
			}
		}

		for (int j = 0; j <= i; j++)
			visited[arr_num[i] + arr_num[j] + 200000] = 1;
	}

	cout << result << endl;
}

#include<iostream>
#include<set>
#include<algorithm>
#include<string.h>
#include<vector>
#include<map>

using namespace std;
int N;
int A_num[6], B_num[6];

void check()
{
	for (int i = 4; i > 0; i--)
	{
		if (A_num[i] > B_num[i])
		{
			cout << "A" << endl;
			return;
		}
		else if (A_num[i] < B_num[i])
		{
			cout << "B" << endl;
			return;
		}
	}

	cout << "D" << endl;
	return;
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int A, B;
		memset(A_num, 0, sizeof(A_num));
		memset(B_num, 0, sizeof(B_num));

		cin >> A;
		
		for (int j = 0; j < A; j++)
		{
			int temp;
			cin >> temp;
			A_num[temp]++;
		}

		cin >> B;

		for (int j = 0; j < B; j++)
		{
			int temp;
			cin >> temp;
			B_num[temp]++;
		}
		
		check();
	}
}

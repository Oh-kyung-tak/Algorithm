#include <iostream>

using namespace std;

const int MAX = 10000000;

int N;
int arr[MAX];

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); 

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;

		if ((arr[temp / 32] & (1 << (temp % 32))))
		{
			cout << temp;
			break;
		}

		arr[temp / 32] |= (1 << (temp % 32));

	}
	return 0;

}

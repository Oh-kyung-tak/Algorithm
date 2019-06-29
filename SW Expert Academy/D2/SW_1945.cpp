#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
 
int T;

int num[5] = { 2,3,5,7,11 };
int cnt[5];
int main()
{
    cin >> T;
 
    for (int k = 1; k <= T; k++)
    {
		int n;
		cin >> n;

		memset(cnt, 0, sizeof(cnt));

		for (int i = 0; i < 5; i++)
		{
			while (1)
			{
				if (n % num[i] != 0)
					break;

				n /= num[i];
				cnt[i]++;
			}
		}

		cout << "#" << k << " ";
		for (int i = 0; i < 5; i++)
			cout << cnt[i] << " ";
		cout << endl;
    }
}
#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int T;

//고정관념에 박히지 말고 문제 풀기
int main()
{
	cin >> T;
	while (T--)
	{
		char meat[11][11];

		int H, W;
		cin >> H >> W;

		getchar();

		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
				cin >> meat[i][j];

			getchar();
		}
			
		for (int i = 0; i < H; i++)
		{
			for (int j = W - 1; j >= 0; j--)
				cout << meat[i][j];

			cout << endl;
		}
	}
}
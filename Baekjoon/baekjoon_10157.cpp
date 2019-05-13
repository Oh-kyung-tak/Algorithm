#include<iostream>
#include<string>
#include<string.h>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;
int C, R;
int K;
int C_count;
int R_count;
int start_C = 1, start_R = 0;
int cnt = 0;
int dir = 1;

int main()
{ 
	cin >> C >> R;
	cin >> K;

	C_count = C - 1;
	R_count = R;
	
	if (K > C * R)
		cout << "0" << endl;
	else
	{
		while (1)
		{
			for (int i = 1; i <= R_count; i++)
			{
				start_R += dir;
				cnt++;

				if (K == cnt)
				{
					cout << start_C << " " << start_R << endl;
					return 0;
				}
			}

			R_count--;

			for (int i = 1; i <= C_count; i++)
			{
				start_C += dir;
				cnt++;

				if (K == cnt)
				{
					cout << start_C << " " << start_R << endl;
					return 0;
				}
			}

			C_count--;
			dir *= -1;
		}
		
	}
}
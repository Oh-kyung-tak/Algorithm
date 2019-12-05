#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int man[7];
int woman[7];

int N, K;
int S, Y;
int room_cnt;

int main()
{
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> S >> Y;
		if (S == 0)
			woman[Y]++;
		else
			man[Y]++;
	}

	//남여 1~2
	if ((man[1] + man[2] + woman[1] + woman[2]) % K == 0)
		room_cnt += (man[1] + man[2] + woman[1] + woman[2]) / K;
	else
		room_cnt += (man[1] + man[2] + woman[1] + woman[2]) / K + 1;
	//남 3~4
	if ((man[3] + man[4]) % K == 0)
		room_cnt += (man[3] + man[4]) / K;
	else
		room_cnt += (man[3] + man[4]) / K + 1;
	//여 3~4
	if ((woman[3] + woman[4]) % K == 0)
		room_cnt += (woman[3] + woman[4]) / K;
	else
		room_cnt += (woman[3] + woman[4]) / K + 1;
	//남 5~6
	if ((man[5] + man[6]) % K == 0)
		room_cnt += (man[5] + man[6]) / K;
	else
		room_cnt += (man[5] + man[6]) / K + 1;
	//여 5~6
	if ((woman[5] + woman[6]) % K == 0)
		room_cnt += (woman[5] + woman[6]) / K;
	else
		room_cnt += (woman[5] + woman[6]) / K + 1;

	cout << room_cnt << endl;
}
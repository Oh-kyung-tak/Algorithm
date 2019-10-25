#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dp_first[100001];
int dp_second[100001];

int solution(vector<int> sticker)
{
	if (sticker.size() == 1)
		return sticker[0];

	dp_first[0] = sticker[0];
	dp_first[1] = sticker[0];

	for (int i = 2; i < sticker.size() - 1; i++)
		dp_first[i] = max(dp_first[i - 2] + sticker[i], dp_first[i - 1]);

	dp_second[0] = 0;
	dp_second[1] = sticker[1];

	for (int i = 2; i < sticker.size(); i++)
		dp_second[i] = max(dp_second[i - 2] + sticker[i], dp_second[i - 1]);

	return max(dp_first[sticker.size() - 2], dp_second[sticker.size() - 1]);
}
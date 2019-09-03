#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int dp_m[1000001];
int dp_m_2[1000001];

int solution(vector<int> money) {
	int answer = 0;

	dp_m[0] = money[0];
	dp_m[1] = money[0];

	for (int i = 2; i < money.size() - 1; i++)
		dp_m[i] = max(dp_m[i - 2] + money[i], dp_m[i - 1]);
	
	dp_m_2[0] = 0;
	dp_m_2[1] = money[1];

	for (int i = 2; i < money.size(); i++)
		dp_m_2[i] = max(dp_m_2[i - 2] + money[i], dp_m_2[i - 1]);


	return max(dp_m[money.size() - 2], dp_m_2[money.size() - 1]);
}
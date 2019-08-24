#include <vector>
#include <set>

using namespace std;

int solution(vector<int> nums)
{
	set<int> s;

	int answer = 0;

	for (int i = 0; i < nums.size(); i++)
		s.insert(nums[i]);

	if (nums.size() / 2 <= s.size())
		answer = nums.size() / 2;
	else
		answer = s.size();

	return answer;
}
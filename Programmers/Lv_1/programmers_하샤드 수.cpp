#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
	bool answer = true;
	int c_num = x;
	int sum = 0;

	while (x)
	{
		sum += x % 10;
		x /= 10;
	}
	
	c_num% sum == 0 ? answer = true : answer = false;

	return answer;
}
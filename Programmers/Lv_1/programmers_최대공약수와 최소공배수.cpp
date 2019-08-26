#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}

	while (b != 0)
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}

	return a;
}

int lcd(int a, int b)
{
	return a * b / gcd(a, b);
}

vector<int> solution(int n, int m) {
	vector<int> answer;

	answer.push_back(gcd(n, m));
	answer.push_back(lcd(n, m));

	return answer;
}
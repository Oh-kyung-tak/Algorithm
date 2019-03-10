#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

long long int sum_salary[100001];

int main()
{
	string s;
	string s1;
	cin >> s;
	s1 = s;
	std::reverse(s1.begin(), s1.end());
	if (s1 == s)
		printf("1");
	else
		printf("0");
}

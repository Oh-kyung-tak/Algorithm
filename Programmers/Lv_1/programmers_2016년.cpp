#include <string>
#include <vector>
#include <iostream>

using namespace std;

int day[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
string st[7] = { "THU","FRI","SAT","SUN","MON","TUE","WED" };

string solution(int a, int b) {
	string answer = "";
	int start = 1;
	
	for (int i = 1; i < a; i++)
		start += day[i];

	start += b - 1;

	answer = st[start % 7];

	return answer;
}
#include <iostream>
#include <queue>
#include <string>
#include <string.h>
using namespace std;

string word;

int sticker[10];
int max_cnt = 1;

int main()
{
	int N;
	cin >> N;
	if (0 <= N && N <= 10)
		cout << "1";
	else if (11 <= N && N <= 110)
		cout << "2";
	else if (111 <= N && N <= 1110)
		cout << "3";
	else if (1111 <= N && N <= 11110)
		cout << "4";
	else if (11111 <= N && N <= 111110)
		cout << "5";
	else if (111111 <= N && N <= 1111110)
		cout << "6";
	else if (1111111 <= N && N <= 11111110)
		cout << "7";
	else if (11111111 <= N && N <= 111111110)
		cout << "8";
	else if (111111111 <= N && N <= 1111111110)
		cout << "9";
}
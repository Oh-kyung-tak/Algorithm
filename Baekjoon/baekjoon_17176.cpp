#include <iostream>
#include <string>
#include <string.h>
#include <queue>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
int num[59];
int word_num[59];
int N;
int sum = 0;

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int temp;
		scanf("%d", &temp);
		num[temp]++;
	}
	getchar();
	for (int i = 0; i < N; i++)
	{
		char c;
		scanf("%c", &c);
		if (c == ' ')
			word_num[0]++;
		else if (c >= 'A' && c <= 'Z')
			word_num[(c + 0) - 64]++;
		else
			word_num[(c + 0) - 70]++;
	}

	for (int i = 0; i <= 52; i++)
		sum += abs(num[i] - word_num[i]);

	if (sum == 0)
		cout << "y";
	else
		cout << "n";
}
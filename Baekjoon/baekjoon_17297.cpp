#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int N;
int num[44] = { 0,5,13 };
string word = "Messi Gimossi";
int main()
{
	cin >> N;
	N--;
	for (int i = 3; i <= 40; i++) 
		num[i] = num[i - 1] + num[i - 2] + 1;
	
	for (int i = 40; i >= 2; i--) 
	{
		if (N >= num[i]) 
			N -= (num[i] + 1);
	}

	if (N == 5 || N == -1) 
		cout << "Messi Messi Gimossi";
	else cout << word[N];
}
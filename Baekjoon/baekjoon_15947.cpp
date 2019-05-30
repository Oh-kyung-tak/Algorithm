#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;

string word[15] = {"","baby", "sukhwan", "tu","tu" ,"very", "cute","tu" ,"tu", "in", "bed", "tu", "tu","baby", "sukhwan"};
int len[15] = {0,0,0,2,1,0,0,2,1,0,0,2,1,0,0};
int N;
int mok, nam;
string last = "ru";

int main()
{
	cin >> N;
	mok = N / 14;
	if (N % 14 == 0)
		nam = 14;
	else
		nam = N % 14;

	if (len[nam] == 0)
		cout << word[nam] << endl;
	else
	{
		int i = mok + len[nam];

		if (i >= 5)
			cout << word[nam] << "+" << last << "*" << i;
		else
		{
			cout << word[nam];
			for (int k = 1; k <= i; k++)
				cout << last;
		}
	}
}
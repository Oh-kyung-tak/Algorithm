#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>


using namespace std;

int N;
bool chk = false;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string word;
		cin >> word;

		if (word == "anj")
			chk = true;
	}

	if (chk)
		cout << "뭐야;";
	else
		cout << "뭐야?";
}
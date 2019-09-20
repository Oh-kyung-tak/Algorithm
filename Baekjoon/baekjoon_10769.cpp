#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>
#include <stack>

using namespace std;

int N;
int cnt = 0;
int happy = 0;
int sad = 0;

string str;

int main()
{
	getline(cin, str);
	int size = str.size();

	for (int i = 0; i < size; i++)
	{
		if (str[i] == ':')
		{
			string temp = str.substr(i, 3);
			
			if (temp == ":-)")
				happy++;
			else if (temp == ":-(")
				sad++;
		}
	}

	if (happy == 0 && sad == 0)
		cout << "none" << endl;
	else
	{
		if (happy == sad)
			cout << "unsure" << endl;
		else
		{
			if (happy > sad)
				cout << "happy" << endl;
			else
				cout << "sad" << endl;
		}
	}
}
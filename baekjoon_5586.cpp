#include <iostream>
#include <string>
#include <string.h>

using namespace std;

string word;
int j_cnt = 0, i_cnt = 0;
int main()
{
	cin >> word;
	int len = word.size();
	for (int i = 0; i < len - 2; i++)
	{
		string temp;
		temp += word[i];
		temp += word[i + 1];
		temp += word[i + 2];
		
		if (temp == "JOI")
			j_cnt++;
		else if (temp == "IOI")
			i_cnt++;
	}
	
	cout << j_cnt << endl;
	cout << i_cnt << endl;
}

#include <iostream>
#include <string>
#include <string.h>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int arr_num[10];
string word;

int main()
{
	int sum = 0;

	cin >> word;

	int len = word.size();
	
	for (int i = 0; i < len; i++)
	{
		arr_num[word[i] - '0']++;
		sum += word[i] - '0';
	}
		

	int v_size = v.size();

	if (sum % 3 == 0 && arr_num[0] > 0)
	{
		for (int i = 9; i >= 0; i--)
		{
			for (int j = 0; j < arr_num[i]; j++)
				cout << i;
		}
	}
	else
		cout << "-1" << endl;

}

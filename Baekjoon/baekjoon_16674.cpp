#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int arr[5];
int check = 1;
int main()
{
	string word;
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] - '0' == 0)
			arr[0]++;
		else if (word[i] - '0' == 1)
			arr[1]++;
		else if (word[i] - '0' == 2)
			arr[2]++;
		else if (word[i] - '0' == 8)
			arr[3]++;
		else
			arr[4]++;
	}

	if (arr[4] > 0)
		printf("0\n");
	else
	{
		if (arr[0] > 0 || arr[1] > 0 || arr[2] > 0 || arr[3] > 0)
			check = 1;

		if (arr[0] > 0 && arr[1] > 0 && arr[2] > 0 && arr[3] > 0)
			check = 2;

		if (arr[0] > 0 && arr[1] > 0 && arr[2] > 0 && arr[3] > 0)
			if (arr[0] == arr[1] && arr[0] == arr[2] && arr[0] == arr[3])
				check = 3;

		if (check == 1)
			printf("1\n");
		else if (check == 2)
			printf("2\n");
		else
			printf("8\n");
	}


}

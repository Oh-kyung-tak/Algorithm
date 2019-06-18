#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <set>
#define MAX 1001

using namespace std;


int main()
{
	while (1)
	{
		string str;
		getline(cin, str);
		int size;
		int cnt = 0;

		if (str == "#")
			return 0;

		size = str.size();
		for (int i = 0; i < size; i++)
		{
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
				cnt++;

			if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
				cnt++;
		}

		printf("%d\n", cnt);
	}
}
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
bool mem[1000001];

int main()
{
	memset(mem, true, sizeof(mem));

	for (int i = 2; i <= sqrt(1000001); i++)
	{
		for (int j = i * i; j <= 1000001; j += i)
		{
			if (mem[j])
				mem[j] = false;
		}
	}

	for (int i = 2; i <= 1000001; i++)
	{
		if (mem[i])
			cout << i << " ";
	}
}
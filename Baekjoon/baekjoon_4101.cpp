#include<iostream>
#include<string>
#include<string.h>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;

int main()
{ 
	while (1)
	{
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
			return 0;

		if (a > b)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}
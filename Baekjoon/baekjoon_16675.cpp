#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

bool win(char A, char B)
{
	if (A == 'S' && B == 'P')
		return true;
	if (A == 'P' && B == 'R')
		return true;
	if (A == 'R' && B == 'S')
		return true;

	return false;
}	
int main()
{
	char ml, mr, tl, tr;
	cin >> ml >> mr >> tl >> tr;

	if (win(ml, tl) && win(ml, tr))
		printf("MS\n");
	else if (win(mr, tl) && win(mr, tr))
		printf("MS\n");
	else if (win(tl, ml) && win(tl, mr))
		printf("TK\n");
	else if (win(tr, ml) && win(tr, mr))
		printf("TK\n");
	else
		printf("?\n");
}

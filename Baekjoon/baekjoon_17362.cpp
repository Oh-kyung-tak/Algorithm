#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;
int N;
int num[8] = { 2,1,2,3,4,5,4,3 };
int main()
{
	cin >> N;

	cout << num[N % 8] << endl;
}
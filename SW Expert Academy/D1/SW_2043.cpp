#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int N;
int sum = 0;

int main()
{
	string P, K;
	
	cin >> P >> K;

	int num = atoi(P.c_str()) -atoi(K.c_str());

	cout << num + 1 << endl;
}
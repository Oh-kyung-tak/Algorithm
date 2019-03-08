#include <iostream>
#include <algorithm> 
#include <queue>
#include <string>

using namespace std;
queue<int> q;

int main()
{
	string a1, a2;

	cin >> a1;
	cin >> a2;

	if (a1.length() < a2.length())
		cout << "no" << endl;
	else
		cout << "go" << endl;
	
}

#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;

int N;
string mega;

//��ҹ��� ���� ���ϱ�..
int main()
{
	cin >> N;

	cin >> mega;

	for (int i = 0; i < N - 1; i++)
	{
		if (mega[i * 2] != mega[i * 2 + 2])
		{
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;
}
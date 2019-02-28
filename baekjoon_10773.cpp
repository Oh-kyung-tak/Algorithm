#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>
#include<stack>

using namespace std;
stack<int> s;

int main() 
{
	int num;
	int sum = 0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		int temp;
		scanf("%d", &temp);

		if (temp == 0)
			s.pop();
		else
			s.push(temp);
	}

	int size = s.size();

	for (int i = 0; i < size; i++)
	{
		sum += s.top();
		s.pop();
	}

	printf("%d", sum);
}

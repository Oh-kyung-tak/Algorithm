#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<stack>

using namespace std;

stack<int> s;

int main() 
{
	int num;
	int carry = 0;

	scanf("%d", &num);

	if (num < 10)
		printf("%d", num);
	else
	{
		while (num)
		{
			int div;

			div = num % 10 + carry;

			if (div >= 5)
			{
				s.push(0);
				carry = 1;
			}
			else
			{
				s.push(0);
				carry = 0;
			}

			num /= 10;

			if (num < 10)
			{
				s.push(num + carry);
				break;
			}
		}

		while (!s.empty())
		{
			printf("%d", s.top());
			s.pop();
		}
	}
}

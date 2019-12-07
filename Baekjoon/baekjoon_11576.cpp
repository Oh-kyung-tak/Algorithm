#include <iostream>
#include <stack>

using namespace std;

long long int sum = 0;
int A, B;
int m;
int cnt = 1;

stack<int> s;
stack<int> ans;

int main()
{
	cin >> A >> B;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		s.push(temp);
	}

	while (!s.empty())
	{
		sum += s.top() * cnt;
		s.pop();
		cnt *= A;
	}

	while (sum)
	{
		ans.push(sum % B);
		sum /= B;
	}

	while (!ans.empty())
	{
		cout << ans.top() << " ";
		ans.pop();
	}
}


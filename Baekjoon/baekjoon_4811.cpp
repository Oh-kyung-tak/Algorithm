#include<iostream>
#include<string>

using namespace std;
int n;
long long D[31][31];
long long dfs(int w, int h)
{
	if (w < 0)
		return 0;

	if (w == 0 && h == 0)
		return 1;
	
	if (D[w][h] > 0)
		return D[w][h];
	
	if (w > 0)
		D[w][h] += dfs(w - 1, h + 1);

	if (h > 0)
		D[w][h] += dfs(w, h - 1);

	return D[w][h];

}
int main()
{
	while (cin >> n && n != 0)
		cout << dfs(n, 0) << endl;
	

}

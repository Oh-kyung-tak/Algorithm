#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
	while (true)
	{
		int numTickets;
		cin >> numTickets;
		if (numTickets == 0)
			return 0;

		vector<bool> found(50);

		int numFound = 0;
		for (int i = 0; i < numTickets; i++)
			for (int j = 0; j < 6; j++)
			{
				int number;
				cin >> number;
				if (!found[number])
				{
					found[number] = true;
					numFound++;
				}
			}

		if (numFound == 49)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}

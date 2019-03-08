#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
	int T;

	scanf("%d", &T);

	while (T--)
	{
		char word[10001];
		int square;
		int tempnum;

		scanf("%s", word);

		for (int i = 1; i <= strlen(word); i++)
		{
			if (i * i == strlen(word))
			{
				square = i;
				break;
			}
		}

		tempnum = square - 1;

		while (tempnum >= 0)
		{
			int tt = tempnum;
			for (int i = 0; i < square; i++)
			{
				printf("%c", word[tt]);
				tt += square;
			}
			tempnum--;
		}
		
		printf("\n");
	}
}

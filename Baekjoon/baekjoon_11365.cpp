#include <stdio.h>
#include <string.h>

int main()
{
	while (1)
	{
		char word[502];
		scanf(" %[^\n]s", word);
		
		int length = strlen(word);

		if (!strcmp(word, "END"))
			break;

		for (int i = length - 1; i >= 0; i--)
			printf("%c", word[i]);

		printf("\n");
	}
}

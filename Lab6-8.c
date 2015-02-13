#include <stdio.h>
#include <string.h>
#include <ctype.h>

char decrypt(char );

int main()
{
	char text[100];
	scanf("%[^\n]s", text);

	int i;
	for (i = 0; i < strlen(text); i++)
	{
		putchar(decrypt(text[i]));
	}

	putchar('\n');

	return 0;
}

char decrypt(char t)
{
	const char *uppercase = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
	const char *lowercase = "abxypqrmncedkljoshtufvzgwi";

	int i;
	if (isupper(t))
	{
		for (i = 0; i < strlen(uppercase); i++)
		{
			if (uppercase[i] == t)
			{
				return uppercase[(i + 5) % 26];
			}
		}
	}
	else if (islower(t))
	{
		for (i = 0; i < strlen(lowercase); i++)
		{
			if (lowercase[i] == t)
			{
				return lowercase[(i + 5) % 26];
			}
		}
	}
	else
	{
		return t;
	}
}
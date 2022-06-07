#include <bits/stdc++.h>
using namespace std;

bool areAnagram(char *str1, char *str2)
{
	int NO_OF_CHARS = 256;
	int count[NO_OF_CHARS] = {0};
	int i;

	for (i = 0; str1[i] && str2[i]; i++)
	{
		count[str1[i]]++;
		count[str2[i]]--;
	}

	for (i = 0; i < NO_OF_CHARS; i++)
		if (count[i])
			return false;
	return true;
}

int main()
{
	char str1[100];
	char str2[100];

	gets(str1);
	gets(str2);

	if (areAnagram(str1, str2))
		cout << "The two strings are anagram of each other";
	else
		cout << "The two strings are not anagram of each "
						"other";

	return 0;
}

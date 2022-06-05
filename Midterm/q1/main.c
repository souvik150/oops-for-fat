#include <stdio.h>
int combination(int n, int s, int a)
{
	int i,result = 0;
	if (n == 1)
	{
		if (s >= a && s <= 9)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	for (i = a; i <= 9; i++)
	{     
		result += combination(n - 1, s - i, i + 1);
	}

	return result;
}

int main()
{
	int  n,s;
    printf("Input the number:\n");
		scanf("%d", &n);
		printf("\nSum of the digits:\n");
		scanf("%d", &s);
		if (n != 0 && s != 0)
		{
			printf("Number of combinations: %d\n",combination(n,s,0));
		}
	return 0;
}

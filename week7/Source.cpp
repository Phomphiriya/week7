#include<stdio.h>
#include<string.h>

int main()
{
	char n[100] = " ";
	int x , j = 0;
	scanf_s("%s", n,100);
	x = strlen(n);
	printf("x = %d\n", x);
	int u = x % 3;
	for (int i = 0; i <= x; i++)
	{
		printf("%c", n[i]);
		if (i == x - 1)
		{
			break;
		}
		if (i == u - 1) 
		{
			printf(",");
			u = u + 3;
		}
		if (u == 0) 
		{
			u += 0;
		}
	}
	return 0;
}
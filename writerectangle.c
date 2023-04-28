#include <stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	int F = 0;
	int G = 0;
	int H = 0;
	puts("total");
	scanf("%d", &A);
	putchar('\n');
	puts("one line");
	scanf("%d", &B);
	putchar('\n');
	C = A / B;	   // TOTAL LINE
	D = A - C * B; // REMAIN NUMBER
	if (A > B)
	{
		while (G < C)
		{
			while (F < B)
			{
				printf("9");
				F++;
			}
			putchar('\n');
			G++;
			F = 0;
		}
		while (H < D)
		{
			printf("9");
			H++;
		}
	}
	else
	{
		while (E < A)
		{
			printf("9");
			E++;
		}
	}

	return 0;
}
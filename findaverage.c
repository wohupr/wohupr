#include <stdio.h>
int main()
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 999;
	int e = 999;
	int f = 0;
	do
	{
		puts("if you input number y1 n0");
		scanf("%d", &e);
	} while (!(e == 0 || e == 1));
	if (e == 1)
	{
		do
		{

			++n;
			puts("now you input number");
			scanf("%d", &a);
			b = b + a;
			do
			{
				puts("continue input? y1 n0");
				scanf("%d", &c);
			} while (!(1 == c || 0 == c));
		} while (c == 1);
		f = b / n;
		printf("the average is %d", f);
	}
	else
		puts("you selected break the program");

	return 0;
}
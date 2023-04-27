#include <stdio.h>
int main()
{
int a, b ;						
scanf("%d",&a);
do{
	switch (a){
		case 1 : puts("spring"); break;
		case 2 : puts("spring"); break;
		case 3 : puts("spring"); break;
		case 4 : puts("summer"); break;
		case 5 : puts("summer"); break;
		case 6 : puts("summer"); break;
		case 7 : puts("autumn"); break;
		case 8 : puts("autumn"); break; 
		case 9 : puts("autumn"); break;
		case 10 : puts("winter"); break;
		case 11 : puts("winter"); break;
		case 12 : puts("winter"); break;
		default : b==999; puts("it is not a month"); break;
	}
}while(b==999);
	return 0;
}
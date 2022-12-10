#include<stdio.h>
int main()
{
	int x;
	int y;
	
	for(x=0;x<10;x++)
	{
		printf("Multiplication Table is %d\n\n",x);
		
		for(y=0;y<12;y++)
		{
			printf("%d\n",x*y);
		}
		
		printf("\n\n");
	}
	
	return 0;
}    
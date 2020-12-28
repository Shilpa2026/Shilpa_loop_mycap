#include <stdio.h>
 
int main()
{
	for(int i=1;i<=6;i++)
	{
		for(int j=0 ;j<(i*2);j++) 
			{
				if(j%2==0)
					printf("0");
				else
					printf("1");
			}
		printf("\n") ;
	}
	return 0;
}
 

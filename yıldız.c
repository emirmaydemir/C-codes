#include<stdio.h>
#include<conio.h>

int main()
{
	int alinanDeger = 1;
	int i = 1;
	int j = 1;
	int t = 0;

	for(i = 1; i <= 39 + 1; i ++)
	{
		for(t = 38; t > i; t -= 2){
			printf(" ");
			
		}
		for(j = 1; j < i ; j ++){
			if( i % 2 == 0)
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}

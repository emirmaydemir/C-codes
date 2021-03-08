#include<stdio.h>

int fonk(){
	extern int a,b,c;
	int d=5;
	return(a*b*c*d);
}

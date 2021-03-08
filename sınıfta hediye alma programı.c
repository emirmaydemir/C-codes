#include <stdio.h>
#include<time.h>
void dizi(int x[],int n);
main(){
int dizii[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
dizi(dizii,13);
return 0;
}
void dizi(int x[],int n){
srand(time(NULL));
int a,i,d=0; 
int hat[14]={1,1,1,1,1,1,1,1,1,1,1,1,1,1};
while(d<13){
i=rand()%13+1;
if(x[a]!=i&&hat[i]>0){
printf("%d.inci--%d.inciye hediye aldi\n",x[a],i);
hat[i]=-1;
a++;
d++;
}
}
	
	
	
	
}

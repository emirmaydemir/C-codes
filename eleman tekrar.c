#include<stdio.h>
#include<time.h>
int main(){
int i,a,n,m,x,y,f=0;
printf("bir boyut giriniz=");
scanf("%d",&i);
int sayilar[i];
srand(time(NULL));

for(a=0;a<i;a++){
sayilar[a]=rand()%10+1;
printf("%d\n",sayilar[a]);
}
for(n=0;n<i;n++){
x=sayilar[n];

for(m=0;m<i;m++){
y=sayilar[m];
if(x==y){
f=f+1;}
}	
printf("%d. eleman tekrar sayisi=%d\n",n+1,f);	
f=0;
}

return 0;
	
	
	
	
	
	
	
	
	
	
	
	
}

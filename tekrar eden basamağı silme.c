#include<stdio.h>
#include<time.h>
int main(){
int a,b,f,i,c;
printf("bir dizi boyutun giriniz=");
scanf("%d",&i);
int sayilar[i];
srand(time(NULL));
for(a=0;a<i;a++){
sayilar[a]=rand()%10+1;
printf("%d\n",sayilar[a]);
}
for(c=0;c<i;c++){
 f=0;

for(b=0;b<c;b++){
if(sayilar[c]==sayilar[b]){
f=1; 
break;
}
}
if(f==0){
printf("%d",sayilar[c]);
}
}
printf("\n");
return 0;
	
	
	
	
	
	
	
	
	
	
}

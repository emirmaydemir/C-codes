#include<stdio.h>
#include<time.h>
int main(){
int dizi[100];
int i,j,temp;
srand(time(NULL));
int a;
for(a=0;a<100;a++){
dizi[a]=rand()%10+1;
printf("%3d",dizi[a]);
}
printf("\n");
printf("\n");
for(i=0;i<99;i++){
for(j=i+1;j<100;j++){
if(dizi[i]>dizi[j]){
temp=dizi[i];
dizi[i]=dizi[j];
dizi[j]=temp;
}
}
}	
for(i=0;i<100;i++){
printf("%3d",dizi[i]);
}	
return(0);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

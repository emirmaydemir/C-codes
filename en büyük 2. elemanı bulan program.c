#include<stdio.h>
#include<time.h>
void dizi_yaz(int x[],int n);
int main(){
int a[15];
int k,i,temp;
srand(time(NULL));
for(k=0;k<15;++k){
a[k]=rand()%15+1;
}
for(i=0;i<15;i++){
 for(k=0;k<14-i;++k){
   if(a[k]>a[k+1]){
   	temp=a[k];
   	a[k]=a[k+1];
   	a[k+1]=temp;
   }
 }
}
printf("siralanan dizi yazdiriliyor\n");
for(k=0;k<15;++k){
printf("%3d",a[k]);
}
dizi_yaz(a,15);
return 0;	
}
void dizi_yaz(int x[],int n){
int max1,max2,i,temp,k;
max1=x[0];
max2=x[1];

if(x[1]>x[0]){
max1=x[1];
max2=x[0];
}
for(k=2;k<15;k++){
if(x[k]>max1){
max2=max1;
max1=x[k];
}
else if(x[k]>max2){
max2=x[k];
}
}
printf("\n");
printf("en buyuk ikinci deger=%d\n",max2);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

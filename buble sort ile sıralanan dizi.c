#include<stdio.h>
#include<time.h>
int main(){
int dizi[100];
int i,j,a,temp;
srand(time(NULL));
for(a=0;a<100;a++){
dizi[a]=rand()%30+1;
printf("%3d",dizi[a]);
}
printf("\n");
printf("\n");
printf("\n");
for(i=1;i<100;i++){
for(j=0;j<100;j++){
if(dizi[j]>dizi[j+1]){
temp=dizi[j+1];
dizi[j+1]=dizi[j];
dizi[j]=temp;
}
}
}
printf("buble sort ile siralanmis dizi\n");
for(i=0;i<100;i++){
printf("-> %d",dizi[i]);
}
return 0;
	
	
}

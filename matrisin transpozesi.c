#include<stdio.h>
#include<time.h>
void matrisi(int satir,int sutun);
int main(){
int x,y;
printf("satir sayisi giriniz=");
scanf("%d",&x);
printf("sutun sayisi giriniz=");
scanf("%d",&y);
matrisi(x,y);
return 0;
}
void matrisi(int satir,int sutun){
int i,j;
int matris[satir][sutun];
srand(time(NULL));
for(i=0;i<satir;i++){
	for(j=0;j<sutun;j++){
	matris[i][j]=rand()%10+1;
	printf("%d\t",matris[i][j]);
	}
	printf("\n");
}
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("matrisin transpozesi");
printf("\n");
printf("\n");
if(satir==sutun){
for(j=0;j<satir;j++){
for(i=0;i<sutun;i++){
printf("%d\t",matris[i][j]);
}
printf("\n");
}
}
if(satir>sutun){
for(j=0;j<satir-(satir-sutun);j++){
for(i=0;i<sutun+(satir-sutun);i++){
printf("%d\t",matris[i][j]);
}
printf("\n");
}
}
if(sutun>satir){
for(j=0;j<satir+(sutun-satir);j++){
for(i=0;i<sutun-(sutun-satir);i++){
printf("%d\t",matris[i][j]);
}
printf("\n");
}
}
}














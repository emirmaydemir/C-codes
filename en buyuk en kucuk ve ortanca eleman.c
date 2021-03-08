#include<stdio.h>
#include<time.h>
void matrisi(int satir,int sutun);
int main(){
int x=10,y=10;
matrisi(x,y);
return 0;
}
void matrisi(int satir,int sutun){
int i,j,a,b,x,y,toplam,f;
int matris[satir][sutun];
srand(time(NULL));
for(i=0;i<satir;i++){
   for(j=0;j<sutun;j++){
   	matris[i][j]=rand()%100+1;
   	printf("%d\t",matris[i][j]);
   }
   printf("\n");
}
x=matris[0][0];
for(a=0;a<satir;a++){
	for(b=0;b<sutun;b++){
	if(matris[a][b]>x){
	x=matris[a][b];
	}
	}
}
y=matris[0][0];
for(a=0;a<satir;a++){
	for(b=0;b<sutun;b++){
	if(matris[a][b]<y){
	y=matris[a][b];
	}
	}
}
for(a=0;a<satir;a++){
 for(b=0;b<sutun;b++){
 toplam=toplam+matris[a][b];
 }
 f=toplam/100;
}
	
	printf("matrisin en buyuk elemani=%d\n",x);
	printf("matrisin en kucuk elemani=%d\n",y);
	printf("matrisin ortalama degeri=%d",f);
	
	
}	
	
	

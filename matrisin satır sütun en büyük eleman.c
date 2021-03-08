#include<stdio.h>
#include<time.h>
int main(){		
int i,j,b,f=0,p=0,x,y=0,a=0,t,l;
int dizi[5];
int sutun[5];
int matris[5][5];
srand(time(NULL));
for(i=0;i<5;i++){
for(j=0;j<5;j++){
matris[i][j]=rand()%9+1;
printf("%d",matris[i][j]);
}
printf("\n");
}	
for(i=0;i<5;i++){
for(j=0;j<5;j++){
b=matris[i][j];
if(b>a){
a=b;
}
}
printf("%d. satir en buyuk elemani=%d\n",i+1,a);
dizi[f]=a;
f++;
a=0;
}
printf("\n");
for(j=0;j<5;j++){
for(i=0;i<5;i++){
x=matris[i][j];
if(x>y){
y=x;
}
}
printf("%d.sutun en buyuk elemani=%d\n",j+1,y);
sutun[p]=y;
p++;
y=0;
}
t=dizi[0];
for(f=0;f<5;f++){
if(t<dizi[f]){
t=dizi[f];
}
}
l=sutun[0];
for(f=0;p<5;p++){
if(l<sutun[p]){
l=sutun[p];
}
}
printf("\n");
if(l>t){
printf("matrisin en buyuk elemanýi=%d",l);
}
else{
printf("matrisin en buyuk elemani=%d",t);
}
return 0;
}	
	


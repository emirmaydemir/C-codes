#include<stdio.h>
#include<time.h>
int main(){
int dizi[100];
int i,j,temp,aranan,bas,orta,bitis,kontrol,h,f;
int yeni[f];
srand(time(NULL));
int a;
for(a=0;a<100;a++){
dizi[a]=rand()%100+1;
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
printf("\n");
printf("sirali dizinin duzenli hali");
f=0;
for(h=0;h<100;h++){
if(dizi[h]!=dizi[h+1]){
printf("%4d",dizi[h]);
yeni[f]=dizi[h];
f++;
}
}





printf("\n");
printf("aranan degeri gir=");
scanf("%d",&aranan);
bas=yeni[0];
bitis=yeni[99];
while(bas<=bitis){
kontrol++;
orta=(bas+bitis)/2;
if(aranan==yeni[orta]){
printf("%d degeri %d. indiste bulundu.",aranan,orta);
break;
}
else if(yeni[orta]<aranan){
bas=orta+1;
}
else if(yeni[orta]>aranan){
bitis=orta-1;
}
}
if(bas>bitis){
printf("bulunamadi");
}	
return 0;	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

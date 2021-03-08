#include<stdio.h>
#include<time.h>
int main(){
srand(time(NULL));
char matris[10][5]={"ahmet","kerem","kerim","tolga","oktay","tarik","kadir","talha","ilhan","selim"};
char dizi[100];
int sayi1[12]={0,5,10,15,20,25,30,35,40,45,50,55};
int sayi2[12]={0,5,10,15,20,25,30,35,40,45,50,55};
int i,j,a=0,d=0,b,c=0,k,l,s,x=-1;

for(i=0;i<10;i++){
for(j=0;j<5;j++){
dizi[a]=matris[i][j];
a++;
}
}

while(d<11){
if(x==-1){
for(b=0;b<5;b++){
printf("%c",dizi[c]);
c++;
x=0;
}
printf("------");
}
s=rand()%10;
if(sayi2[s]!=-1&&sayi2[s]!=c-5){
for(l=sayi1[s];l<sayi1[s+1];l++){
printf("%c",dizi[l]);
}
printf(">>>>ogrencisine hediye aldi");
sayi2[s]=-1;
d++;
x=-1;
printf("\n");
}
}	
return 0;
	
	
	
	
	
	
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	



#include<stdio.h>
#include<string.h>
int main(){
char cumle[250];
int dizi[100];
int f=0,s=0,harf,ks,gks,x=0,j=0,max=0,k=0,n,min=0,i,a=0;
printf("cumleyi giriniz:");
gets(cumle);

for(i=0;i<strlen(cumle);i++){
if(cumle[i]==' ')
ks++;
}	
gks=ks+1;

printf("aranan harfi giriniz=");
scanf("%c",&harf);	
while(a<gks){
if(cumle[j]==harf){
x++;
}	
if(cumle[j]==' '|| cumle[j]=='\0'){
if(x>max){
max=x;
}
dizi[a]=x;
a++;
x=0;
}	
j++;	
}
if(max!=0){
printf("aranan %c karakteri en cok ",harf);
printf("bu kelimede %d kez tekrar etti-------",max);
}
else{
printf("aranan %c karakteri bu cumlede bulunmamaktadir.",harf);
}
for(n=0;n<a;n++){
if(dizi[n]>min){
min=dizi[n];
k=n;
}
}

while(cumle[f]!='\0'){
if(cumle[f]==' '|| cumle[f]=='\0'){
s++;
}	
if(k==s&&max!=0){
printf("%c",cumle[f]);
}	
f++;	
	
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

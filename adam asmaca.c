#include<stdio.h>
#include<time.h>
#include<string.h>
int main(){
int a,b=0,r,i,j,l,k,p,t,n=0,y,c=0,s=0,z=0,m=0,q,v=0;
char harf;
char uzunluk;
char dizi[300]={"xtarakxsapanxbursaxizmirxantenxmaskexkalemxcamxtelxkarsxklavyexlambaxkayserixizmitxsilgixkapxtrabzonxkabloxsapkaxeldivenx"};
char diza[100];
char dizb[100];
char h[100];
char cumle[100];
srand(time(NULL));
while(1){
a=rand()%129;
if(dizi[a-1]=='x'){
break;
}
}
while(dizi[a]!='x'){
diza[b]=dizi[a];
a++;
b++;
}
while(diza[n]!='\0'){
dizb[n]=diza[n];
n++;
}
   for (i = 0; i < n; i++) {
      for (j = i + 1; j < n;) {
         if (diza[j] == diza[i]) {
            for (k = j; k < n; k++) {
               diza[k] = diza[k + 1];
            }
            n--;
         } else
            j++;
      }
   }
   printf(dizb);
   printf("\n");
   printf("baslamak icin bir enter tusuna basiniz\t");
   scanf("%c",&harf);
     printf("\n");  printf("\n");  printf("\n");
     printf("cumleyi tahmin etmek icin w tusuna basip enterleyiniz !!!!!");
    printf("\n"); printf("\n"); printf("\n"); printf("\n"); printf("\n");
    printf("harf tahmininde bulunun:\n");
   p=strlen(dizb);
   y=p+p;
   fflush(stdin);
  for(l=0;l<y;l++){
  	scanf("%c",&harf);
  	for(t=0;t<strlen(diza);t++){
  		if(diza[t]==harf){
  			printf("dogru bildiniz tekrar harf girin=\n");
  			  fflush(stdin);
  			   s++;
  			   z++;
  			c++;
		  }
		  
	}	 
	 if(z==strlen(diza)){
	 	printf("\ntebrikler kazandiniz cumleyi dogru bildiniz %s",dizb);  // nice shot
	 	break;
	 }
	 if(harf=='w'){
	m++;
	break;
	 }
		  if(c!=1){
		  	printf("yanlis harf girdiniz tekrar girin=\n");
		  	s++;
		  	  fflush(stdin);
		  }
		  c=0;
  }
  
  
  
  
  if(y==s){
  	printf("\n kaybettin tahmin hakkin bitti");
  }
  if(m==1){
  printf("cumleyi gir=");
  scanf("%s",&cumle);
  printf(cumle);
  printf("\t");
  }
  for(q=0;q<strlen(cumle);q++){
  	if(cumle[q]==dizb[q]){
  		v++;
	  }
  }
  if(v==strlen(dizb)){
  	printf("tebrikler kazandin tahmin ettigin cumle dogru");
  }
 if(v!=strlen(dizb) && m==1){
 	printf(" kaybettin girdigin cumle yanlis");
 }
return 0;
   
   
   
   
   
   
   
   
   
   
   
   
   
   
}

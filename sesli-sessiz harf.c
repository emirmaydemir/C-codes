#include<stdio.h>
#include<time.h>
int main(){
int a,i,b;
char sesli[6]={"aeiou"};
char sessiz[6]={"bdglf"};
printf("kelimede yer alacak harf sayisini giriniz=");
scanf("%d",&a);
srand(time(NULL));
   for(i=0;i<a;i++){
   b=rand()%5;
   if(i%2==0){
   printf("%c",sesli[b]);
   }
   else{
   printf("%c",sessiz[b]);
   }
   }
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
}

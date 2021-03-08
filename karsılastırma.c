#include<stdio.h>
#include<string.h>


int main(){
int i,j=0,sayac=0,k=0,max=0;
char dizi[100];
char *eleman;
char *nesneler[10]={"elma","armut","muz","karpuz","ananas","nar","portakal","mandalina","kivi","ayva"};//pointeri burada matris gibi kullandým
printf("arayacagin nesneyi gir:\n");
gets(dizi);	
printf("\n");
while(i<10){
		if(nesneler[i][k]==dizi[j]&&k==j){
		sayac=sayac+3;
		}
		if(nesneler[i][k]==dizi[j]&&k==j+1){
		sayac=sayac+2;
		}
		if(nesneler[i][k]==dizi[j]&&k==j-1){
		sayac=sayac+2;
		}
		if(nesneler[i][k]==dizi[j]&&k!=j&&k!=j+1&&k!=j-1){
		sayac=sayac+1;
		}
		
		
		
	
		if(strlen(dizi)-1==j){
			j=-1;
			k++;
		    
		}
		if(nesneler[i][k]=='\0'){
			printf("%s stringinden aldigi puan =%d\n",nesneler[i],sayac);
			i++;
			if(sayac>max){
				max=sayac;
				eleman=nesneler[i-1];
			}
			sayac=0;
			k=0;
			j=-1;
		}
			j++;				
}
	
	printf("\n");
	printf("en cok benzeyen %d puaniyla %s stringidir",max,eleman);
	
	
	
	
	
	
	
	
	
	
	
}

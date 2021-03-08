#include<stdio.h>
#include<stdlib.h>


int main(){
	struct sayilar{
		int basamak[10];
	};
	int i,sayi1,sayi2,j=-1,s=1;
	struct sayilar sayi;
	
    int dizi[10]={0,1,2,3,4,5,6,7,8,9};
    char *dizi2[10]={"","yuz","ikiyuz","ucyuz","dortyuz","besyuz","altiyuz","yediyuz","sekizyuz","dokuzyuz"};
     char *dizi3[10]={"","on","yirmi","otuz","kirk","elli","altmis","yetmis","seksen","doksan"};
      char *dizi4[10]={"","bir","iki","uc","dort","bes","alti","yedi","sekiz","dokuz"};
	printf("6 basamakli bir sayi giriniz:");
	scanf("%d",&sayi1);
	sayi2=sayi1;
	for(i=6;i>0;i--) {
	    sayi.basamak[i]=sayi1%10;
		sayi1=sayi1/10;
	}
	
	if(sayi2<100000){
		printf("lutfen 6 basamakli bir sayi giriniz\n");
}
	while(s!=7){
	if(sayi2>=100000&&s==1){
		j++;
		if(sayi.basamak[s]==dizi[j]) {
			printf("%s",dizi2[j]);
			j=-1;
			s++;
		}
	}
		if(sayi2>=10000&&s==2){
		j++;
		if(sayi.basamak[s]==dizi[j]) {
			printf(" %s",dizi3[j]);
			j=-1;
			s++;
		}
	}
		if(sayi2>=1000&&s==3){
		j++;
		if(sayi.basamak[s]==dizi[j]) {
			printf(" %s bin",dizi4[j]);
			s++;
			j=-1;
		}
	}
		if(sayi2>=100&&s==4){
		j++;
		if(sayi.basamak[s]==dizi[j]) {
			printf(" %s",dizi2[j]);
			j=-1;
			s++;
		}
	}
		if(sayi2>=10&&s==5){
		j++;
		if(sayi.basamak[s]==dizi[j]) {
			printf(" %s",dizi3[j]);
			j=-1;
			s++;
		}
	}
		if(sayi2>=1&&s==6){
		j++;
		if(sayi.basamak[s]==dizi[j]) {
			printf(" %s",dizi4[j]);
			j=-1;
			s++;
		}
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
	
}

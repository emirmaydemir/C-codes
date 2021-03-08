#include<stdio.h>
#include<stdlib.h>


int main(){
	printf("lutfen int alanini asmayacak sekilde en fazla 8 basamakli bir sayi giriniz\n");
	struct sayilar{
		int basamak[100];
	};
	int i=0,sayi1,sayi2,j=-1,sayac=0,sayi3,k=1;
	struct sayilar sayi;
	
    int dizi[10]={0,1,2,3,4,5,6,7,8,9};
    char *dizi2[10]={"","yuz","ikiyuz","ucyuz","dortyuz","besyuz","altiyuz","yediyuz","sekizyuz","dokuzyuz"};
     char *dizi3[10]={"","on","yirmi","otuz","kirk","elli","altmis","yetmis","seksen","doksan"};
      char *dizi4[10]={"","bir","iki","uc","dort","bes","alti","yedi","sekiz","dokuz"};
	printf("bir sayi giriniz:");
	scanf("%d",&sayi1);
	sayi2=sayi1;
	sayi3=sayi1;
while(sayi1!=0) {
		sayi1=sayi1/10;
		sayac++;
	}

for(i=sayac;i>0;i--){
	 sayi.basamak[i]=sayi3%10;
		sayi3=sayi3/10;
}
	if(sayi2==0){
			printf("%d",sayi2);
		}
		
	while(sayi2!=0){
	
	
			if(sayi2>=100000000){
		j++;
		if(sayi.basamak[k]==dizi[j]) {
			printf("%s",dizi2[j]);
			j=-1;
			k++;
			sayi2=sayi2/10;
		}
	}
			if(sayi2>=10000000&&sayi2<100000000){
		j++;
		if(sayi.basamak[k]==dizi[j]) {
			printf(" %s",dizi3[j]);
			j=-1;
			k++;
				sayi2=sayi2/10;
		}
	}
			if(sayi2>=1000000&&sayi2<10000000){
		j++;
		if(sayi.basamak[k]==dizi[j]) {
			printf(" %s milyon ",dizi4[j]);
			j=-1;
			k++;
				sayi2=sayi2/10;
		}
	}
	if(sayi2>=100000&&sayi2<1000000){
		j++;
		if(sayi.basamak[k]==dizi[j]) {
			printf(" %s",dizi2[j]);
			j=-1;
			k++;
				sayi2=sayi2/10;
		}
	}
		if(sayi2>=10000&&sayi2<100000){
		j++;
		if(sayi.basamak[k]==dizi[j]) {
			printf(" %s",dizi3[j]);
			j=-1;
			k++;
				sayi2=sayi2/10;
		}
	}
		if(sayi2>=1000&&sayi2<10000){
		j++;
		if(sayi.basamak[k]==dizi[j]&&sayi.basamak[k]!=0) {
			printf(" %s bin",dizi4[j]);
			j=-1;
			k++;
				sayi2=sayi2/10;
		}
		else if(sayi.basamak[k]==dizi[j]&&sayac<=6){
				printf(" %s bin",dizi4[j]);
			j=-1;
			k++;
				sayi2=sayi2/10;
		}
	}
		if(sayi2>=100&&sayi2<1000){
		j++;
		if(sayi.basamak[k]==dizi[j]) {
			printf(" %s",dizi2[j]);
			j=-1;
			k++;
				sayi2=sayi2/10;
		}
	}
		if(sayi2>=10&&sayi2<100){
		j++;
		if(sayi.basamak[k]==dizi[j]) {
			printf(" %s",dizi3[j]);
			j=-1;
			k++;	
				sayi2=sayi2/10;	}
	}
		if(sayi2>=1&&sayi2<10){
		j++;
		if(sayi.basamak[k]==dizi[j]) {
			printf(" %s",dizi4[j]);
			j=-1;
			k++;
				sayi2=sayi2/10;
		}
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
	
}

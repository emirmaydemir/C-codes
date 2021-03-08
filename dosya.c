#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	setlocale(LC_ALL, "Turkish"); 
		struct ogrenci2{                //ÖNEMLÝ!!  DOSYA1 DE ÝSÝMLERÝ VE NUMARALARI SIRALI TUTUYOR
		char isim2[20];              //DOSYA 2 DE NUMARALARI SIRALANMAMIÞ HALDE TUTUYOR
		int no2;                    // DOSYA 3 TE NUMARALARI SIRALANMIÞ HALDE TUTUYOR
	};                            // FSCANF ÝLE OKUMA YAPILDI HEM ÝSÝMLER HEM DE NUMARALAR SIRALANDI SÝYAH EKRANDA
	struct ogrenci2 say[20];
	
	struct ogrenci{
		char isim[20];
		int no;
	};
	struct ogrenci tm[20];
	
	
	FILE *tutucu=fopen("dosya.txt","w");
	FILE *tutucu2=fopen("dosya2.txt","w");
	FILE *tutucu3=fopen("dosya3.txt","w");
	
	srand(time(NULL));
	char *karakterler="abcdefghijklmnoprstuvyz";
   static char dizi[20][20];
	int numaralar[100]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int a,i=0,bayrak=1,h,j=0,uzunluk,boyut=0,k=0,l=0,depo2,depo4;
	char depo[20];
	char depo5[20];
	int depo3[20];
	char tut[100];
	int n=4;
	int deger,sayac=4,sayacc=0;
    while(i<20){
    	a=rand()%100+1;
    	if(numaralar[a]>0&&a>0){
    		tm[i].no=a;
    		say[i].no2=a;
    		numaralar[a]=0;
    		i++;
		}
	}
	uzunluk=rand()%8+1;
	while(j<20){
		h=rand()%22;
			if(boyut>=uzunluk){
		strcpy(tm[l].isim,dizi[j]);
		strcpy(say[l].isim2,dizi[j]);
		l++;
		j++;
		boyut=0;
		k=0;
		uzunluk=rand()%7+3;
	}
	
	    if(bayrak>0){		
if(karakterler[h]=='a'||karakterler[h]=='e'||karakterler[h]=='i'||karakterler[h]=='o'||karakterler[h]=='u'||karakterler[h]=='ý'||karakterler[h]=='ö'||karakterler[h]=='ü'){
		dizi[j][k]=karakterler[h];
		k++;
		bayrak=-1;
		boyut++;
	}
	}
		
	
	if(bayrak<0){
		if(karakterler[h]!='a'&&karakterler[h]!='e'&&karakterler[h]!='i'&&karakterler[h]!='o'&&karakterler[h]!='u'&&karakterler[h]!='ý'&&karakterler[h]!='ö'&&karakterler[h]!='ü'){
			dizi[j][k]=karakterler[h];
			k++;
			bayrak=1;
			boyut++;
		}
	}
	
	}
	
	for(i=0;i<19;i++){
		for(j=i+1;j<20;j++){
			if(strcmp(tm[i].isim,tm[j].isim)>0){
				strcpy(depo,tm[i].isim);
				depo4=tm[i].no;
				strcpy(tm[i].isim,tm[j].isim);
				tm[i].no=tm[j].no;
				strcpy(tm[j].isim,depo);
				tm[j].no=depo4;
			}
			
		}
	}
			fprintf(tutucu2,"\n");
	fprintf(tutucu2,"ÖÐRENCÝLER NUMARALARI SIRALANMAMIÞ HALÝ\n");
	for(i=0;i<20;i++){
		fprintf(tutucu2,"öðrenci ismi: %s  öðrenci no: %d",tm[i].isim,tm[i].no);
		fprintf(tutucu2,"\n");
	}
	fclose(tutucu2);
	
	fprintf(tutucu,"ÖÐRENCÝLER ÝSME GÖRE SIRALANMIÞTIR\n");
	for(i=0;i<20;i++){
		fprintf(tutucu,"öðrenci ismi: %s    öðrenci no: %d",tm[i].isim,tm[i].no);
		fprintf(tutucu,"\n");
	}
	fclose(tutucu);
	tutucu=fopen("dosya.txt","a");
		for(i=0;i<19;i++){
		for(j=i+1;j<20;j++){
			if(say[i].no2<say[j].no2){
				depo2=say[i].no2;
				strcpy(depo5,say[i].isim2);
				say[i].no2=say[j].no2;
				strcpy(say[i].isim2,say[j].isim2);
				say[j].no2=depo2;
				strcpy(say[j].isim2,depo5);
			}
			
		}
	}
	
	
		fprintf(tutucu,"\n");
	fprintf(tutucu,"ÖÐRENCÝLER NUMARALARINA GÖRE SIRALANMIÞTIR\n");
	for(i=0;i<20;i++){
		fprintf(tutucu,"öðrenci ismi: %s    öðrenci no: %d",say[i].isim2,say[i].no2);
		fprintf(tutucu,"\n");
	}
		fclose(tutucu);
	
	tutucu=fopen("dosya.txt","r");
		while(!feof(tutucu)){
			fscanf(tutucu,"%s",&tut);
			printf(" %s ",tut);
				if(sayacc==127){
			printf("\n");
			n=-1;
			
		}
		
			if(sayac==7&&n==4){
			printf("\n");
			sayac=1;
		}
		if(sayacc==131){
			n=4;
			sayac=5;
		}
		
			sayac++;
			sayacc++;
		
		}
	fclose(tutucu);
			fprintf(tutucu3,"\n");
	fprintf(tutucu3,"ÖÐRENCÝLER NUMARALARINA GÖRE SIRALANMIÞTIR\n");
	for(i=0;i<20;i++){
		fprintf(tutucu3,"öðrenci ismi: %s    öðrenci no: %d",say[i].isim2,say[i].no2);
		fprintf(tutucu3,"\n");
	}
	fclose(tutucu3);
	
	
	
	
	
	
}


#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>
void nesnegir();
void hesaplama();
	struct nesneler{
	char isim[20];
	int uzunluk;
	int sesli;
	int sessiz;
};
int main(){
	printf("lutfen turkce karakter girmeyiniz\n");
setlocale(LC_ALL, "Turkish");
int i,j;
struct nesneler kisi[15];
nesnegir(kisi);
hesaplama(kisi);
}
void nesnegir(struct nesneler *per){
int i;
for(i=0;i<15;i++){
printf("%d. nesneyi gir :",i+1);
scanf("%s",&per[i].isim);
}

}

void hesaplama(struct nesneler *p){
int i,unlusay=0,unsuzsay=0,j;
char *benzerlikk[14];
char *depo[15];
char *ptr[15];
char dizi[10];
for(j=0;j<15;j++){
strcpy(dizi,p[j].isim);
benzerlikk[j]=p[j].isim;
for(i=0;i<strlen(dizi);i++){
	if(dizi[i]=='a'||dizi[i]=='e'||dizi[i]=='ý'||dizi[i]=='i'||dizi[i]=='o'||dizi[i]=='ö'||dizi[i]=='u'||dizi[i]=='ü'){
		unlusay++;
	}
	else{
		unsuzsay++;
	}
}
 printf("%s uzunluk =%d sesli harf= %d sessiz harf= %d\n",dizi,strlen(dizi),unlusay,unsuzsay);
 unlusay=0;
 unsuzsay=0;	
}
int a=0,b,c,sayac=0,max=1,d;
while(a<14){
for(c=0;c<15;c++){
	for(b=0;b<strlen(benzerlikk[a]);b++){
		for(d=0;d<strlen(benzerlikk[c]);d++){
			if(benzerlikk[a][b]==benzerlikk[c][d]&&benzerlikk[a]!=benzerlikk[c]){
				if(b==d){
					sayac=sayac+3;
				}
				else if(b==d+1 || b==d-1){
					sayac=sayac+2;
				}
				else{
					sayac=sayac+1;
				}
			}
		}
	}
	if(sayac>max){
		max=sayac;
		depo[1]=benzerlikk[a];
		depo[2]=benzerlikk[c];
	}
	sayac=0;
}
a++;
}
printf("\n");
printf("en cok benzeyen ikili %s---%s ",depo[1],depo[2]);
}






	
	

#include<stdio.h>
int replace(char *s,char a,char b);


int main(){
	int tekrarsayisi;
char karakter[20];
char gelenharf;
char gidenharf;
printf("LUTFEN KARAKTERI GIRDIKTEN SONRA ENTER BASIN SONRASINDA ENTER BASMAYIN KENDISI OKUYACAKTIR\n");
printf("karakteri giriniz: ");
scanf("%s",&karakter);
printf("degistirmek istediginiz harfi girin: ");
gidenharf=getche();
printf("\n");

printf("yerine getireceginiz harfi girin: ");
gelenharf=getche();
printf("\n");

tekrarsayisi=replace(karakter,gidenharf,gelenharf);
printf("degistirilen karakter sayisi: ");
printf("%d",tekrarsayisi);
}


int replace(char *s,char a,char b){
	int i=0,boyut=0,sayac=0;
	
	while(s[i]!='\0'){
		boyut++;
		i++;
	}
	
	for(i=0;i<boyut;i++){
		if(s[i]==a){
			s[i]=b;
			sayac++;
		}
	}
	printf("KARAKTERIMIZIN DUZENLENMIS HALI:\n");
	printf("%s\n",s);
	return sayac;

}

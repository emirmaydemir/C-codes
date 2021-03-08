#include<stdio.h>
#include<string.h>
char dizifonk(char *a,char harf,int eleman);
int main(){
char harf;
int cumleleman;
char cumle[100];
printf("cumleyi gir:\n");
gets(cumle);
printf("aranan harfi gir:\n");
scanf("%c",&harf);
cumleleman=strlen(cumle);
dizifonk(&cumle[0],harf,cumleleman);                    // POÝNTER VE FONKSÝYON KULLANARAK GÝRÝLEN CÜMLEDEKÝ ÝÞLEMLER
	
	
		
}
char dizifonk(char *a,char harf,int eleman){
	int i,sayac=0;
	int j;
	int b=0;
	int d;
	int boslukcikarma=0;     //   GÝRÝLEN CÜMLE BOÞLUKLU OLURSA ÝLK HANGÝ ELEMANDA TEKRAR ETTÝÐÝNÝ DOÐRU HESAPLAMASI ÝÇÝN BOÞLUKLARI ÇIKARICAZ
	int boslukcikarmaa=0;
for(i=0;i<eleman;i++){
	if(a[i]==harf){
		sayac++;
		b=1;
	}
		if(a[i]==' '){
		boslukcikarma++;
	}
	
	if(b==1&&d!=-1){
		printf("aranan harf ilk %d. elemanda bulundu\n",(i+1-boslukcikarma));
		d=-1;
	}

}
printf("aranan harf %d kez tekrar etti\n",sayac);	
printf("\n");
for(j=0;j<100;j++){
			if(a[j]==' '){
		boslukcikarmaa++;
	}
	if(a[j]==harf){
		printf("aranan harf %d. konumda\n",(j+1-boslukcikarmaa));
	}
}

}

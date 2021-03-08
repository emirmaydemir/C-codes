#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

// 2. DOSYAYI SÝYAH EKRANDA DOLDURUNUZ !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int main(){
	int sayac2=0,b2=0,boyut,adet=0;//bul iþleminde kullanýlacak deðiþkenler adet aranan harf sayýsý eþitlenince artýcak boyut girilen kelime boyutu olucak
	char karakter;// bul kýsmýndaki harfleri karþýlaþtýrmak için kullanýcaz
int input,sayac=0,tuslama,harf=0,satir=0,tane,j=0,s=0,i=0;
char inputdizi[1000];//dosyamýzýn içine bir metin yazmak için kullanýcýdan alacaðýmýz metni tutacak olan dizi
char inputdizi2[1000];//kullanýcýnýn oluþturcaðý dosyanýn içini doldurmak için kullanýlacak dizi
char okunandizi[100];//dosyamýzýn içindeki okuduðumuz metni bu diziye aktarýcaz
char buldizi[500];//4 numarada bul için kullanýcýdan aranan kelimeyi istenecek bu dizide
char dosyaa[100];// 2. dosyamýzýn ismini almak için kullanýcaz.
char tutucu[300];//1. dosyanýn satirlarýný tutacak karþýlaþtýrma için
char tutucu2[300];//2. dosyanýn satirlarýný tutacak karþýlaþtýrma için
int harfadet[50];//birinci dosyadaki her bir satýrdaki harf adeti tutuluyor
int satiradet;// 1. dosyanýn satýr adeti 
int harfadet2[50];// ikinci dosyadaki yani kullanýcýnýn oluþturduðu dosyadaki her bir satýrdaki harf adeti tutuluyor
int satiradet2;//2. dosyanýn satýr adeti
char a,b;//harf karþýlaþtýrmasý yaparken kullanýcaz
char a1;//harf karþýlaþtýrmasý yaparken kullanýcaz
char b1;//harf karþýlaþtýrmasý yaparken kullanýcaz
FILE *dosya;//dosya1
FILE *dosya2;//dosya2

printf("1 tusu kaydet \n");
printf("2 tusu oku \n");
printf("3 tusu karsilastir \n");
printf("4 tusu bul \n");
printf("5 tusu cikis \n");
printf("\n");
printf("bir rakam giriniz: ");

scanf("%d",&input);//kullanýcýdan giriþ deðeri aldýk (1,2,3,4,5) deðerleri için
fflush(stdin);//scanf in içini boþalttýk enter sonrasý için

while(input!=5){//5 rakamýna basarsa kullanýcý döngüden çýkýcak
	
	if(input==1){//kullanýcý 1 deðerini girdiyse buraya girer
		dosya=fopen("soru2.txt","a");// soru2.txt dosyamýzý sonuna eklemeli modda açtýk
		printf("\ncumleyi giriniz: ");
		gets(inputdizi);//dizimizin içine kullanýcýdan metin aldýk
		fprintf(dosya,"%s\n",inputdizi);//dizimizin içindeki metni dosyanýn içine yazdýk
	    fclose(dosya);//dosyamýzý kapattýk
	}
	
	
	
	if(input==2){//kullanýcý 2 deðerini girdiyse buraya girer
		dosya=fopen("soru2.txt","r");//kapattýðýmýz dosyamýzý okuma modunda açtýk
		printf("\nDosyanin icerigi:\n");
		printf("\n");
		while(!feof(dosya)){//dosyanýn sonuna kadar okur
		fgets(okunandizi,100,dosya);//1 satir boyunca yazýlan tüm kelimeleri dizinin içine atar
		if(!feof(dosya)){//dosyanýn sonuna geldiðinde fazladan 1 adet printf yazmasýn diye if sýnýrladým
		printf("%s",okunandizi);//dosyadan dizimizin içine okuduðumuz deðerleri siyah ekrana bastýrdým
	}
	}
	fclose(dosya);//dosyamý kapattým
	}
	
	

	if(input==3){//3 rakamýný girerse kullanýcý buraya girer
	
		dosya=fopen("soru2.txt","r");//dosyamýzý okuma modunda açtýk
		while(!feof(dosya))//dosyanýn sonuna kadar okuma yapar
{
tane++;//bu düngünün amacý hangi satirda kaç kelime olduðunu bulmaktýr !!!!!!!!
a=fgetc(dosya); //dosya dan karakter okur
if(a=='\n')  //alt satýra geçmiþ mi kontrol eder
{
satir++;//satir sayisi 1 arttýrma sebebimiz sýfýrdan baþlatmamýz 
tane--; //alta geçme karakteri olan \n saymamak için
harfadet[j]=tane;// dizinin her indisi bir satiri temsil eder ve her satirda kaç kelime var kaydediyoruz
j++;
satiradet=satir;//satir sayisini kaydediyoruz
tane=0;//taneyi 0 lýyoruz çünkü diðer satýrlarda yeniden sayýcaz harf sayýsýný
}

}
fclose(dosya);//dosyamýzý kapattýk
tane=0;
satir=0;// ikinci döngüde bu deðiþkenleri kullanacaðýmýz için sýfýrladým
j=0;

	printf("dosya ismini giriniz (sonuna .txt yapabilirsiniz): ");
		dosya2=fopen(gets(dosyaa),"a");//ikinci dosya ismini kullanýcýdan aldým
		while(s!=-1){//kullanýcý -1 deðerini girmediði sürece kendi oluþturduðu dosyasýný dolduracak
         printf("2. dosyaya metin gir: ");
         gets(inputdizi2);//kullanýcýdan kendi oluþturduðu dosyayý oluþtumasý için bir string alýyotuz
           fprintf(dosya2,"%s\n",inputdizi2);//kullanýcýnýn girdiði metni dosya2 ye aktardýk
           printf("\n2.dosyanin alt satirindan devam etmek icin herhangi bir tusa basiniz \n");
            printf("2.dosyaya yazmayi birakmak icin (-1)'e basip enterleyiniz:  ");
           scanf("%d",&s);//-1 e basarsa daha yazamaz bir alt satýrdan devam etmek için herhangi bir tusa basabilir.
           fflush(stdin);//scanf içini boþalttýk
       }
         fclose(dosya2);//dosya2 mizi kapattýk
         
      	dosya2=fopen(dosyaa,"r");//dosya2 yi okuma modunda açtýk






		while(!feof(dosya2))//dosya2 nin sonuna kadar okuma yapar
{
tane++;  //bu düngünün amacý hangi satirda kaç kelime olduðunu bulmaktýr !!!!!!!!
a=fgetc(dosya2); //dosya2 den karakter okur
if(a=='\n') //alt satýra geçmiþ mi kontrol eder
{
satir++; //satir sayisi 1 arttýrma sebebimiz sýfýrdan baþlatmamýz 
tane--; //alta geçme karakteri olan \n saymamak için
harfadet2[j]=tane;// dizinin her indisi bir satiri temsil eder ve her satirda kaç kelime var kaydediyoruz
j++;
satiradet2=satir;//satir sayisini kaydediyoruz
tane=0;//taneyi 0 lýyoruz çünkü diðer satýrlarda yeniden sayýcaz harf sayýsýný
}

}
fclose(dosya2);//dosya2 yi kapattýk
		dosya=fopen("soru2.txt","r");//dosyayý okuma modunda açtýk
		dosya2=fopen(dosyaa,"r");//dosya2 yi okuma modunda açtýk

            
			for(i=0;i<satiradet;i++){//döngü ile tüm satýrlarý karþýlaþtýracam
			       
					fgets(tutucu,50,dosya);//dosya nin sýradaki satýrýný tutucu dizisine atýyorum
				for(j=0;j<satiradet2;j++){//döngü ile tüm satýrlarý karþýlaþtýracam
					fgets(tutucu2,50,dosya2);//dosya2 nin sýradaki satýrýný tutucu2 dizisine atýyorum
					if(harfadet[i]==harfadet2[j]){// satýrlardaki harf sayýlarý eþit mi diye bakýyorum
						 if(strcmp(tutucu,tutucu2)==0){//satýrlarý karþýlaþtýrýyorum
						 	printf("\n%d --- %d satirlari esittir\n",(i+1),(j+1));
						 }
					}	
					
				}
				
				rewind(dosya2);//dosyadaki göstergeyi baþa alýyorum döngüyle eþ zamanlý çalýþmasý için
			}
		
		
		
		
		
		
		
s=0;//bir daha girdiðinde whileye girebilmesi için -1 i deðiþtirdik
 
 fclose(dosya);//dosya kapattýk
 fclose(dosya2);//dosya2 kapattýk
 
	}
	
	
	
	
	if(input==4){//4 rakamýna basarsa buraya girecek
	   dosya=fopen("soru2.txt","a");
	 fclose(dosya);
		dosya=fopen("soru2.txt","r");//dosyayý okuma modunda açtýk
		printf("bulmak istediginiz kelime giriniz ");
		gets(buldizi);//kullanýcýdan aranan kelimeyi istedik
		
		tane=0;
		satir=0;
		j=0;
		
			while(!feof(dosya))//dosya2 nin sonuna kadar okuma yapar
{
tane++;  //bu düngünün amacý hangi satirda kaç kelime olduðunu bulmaktýr !!!!!!!!
a=fgetc(dosya); //dosya2 den karakter okur
if(a=='\n') //alt satýra geçmiþ mi kontrol eder
{
satir++; //satir sayisi 1 arttýrma sebebimiz sýfýrdan baþlatmamýz 
tane--; //alta geçme karakteri olan \n saymamak için
harfadet[j]=tane;// dizinin her indisi bir satiri temsil eder ve her satirda kaç kelime var kaydediyoruz
j++;
satiradet=satir;//satir sayisini kaydediyoruz
tane=0;//taneyi 0 lýyoruz çünkü diðer satýrlarda yeniden sayýcaz harf sayýsýný
}

}
rewind(dosya);	//dosyanýn baþýna geldik aþaðýdakþ döngüde baþtan kontrol etmemiz lazým
boyut=strlen(buldizi);	//kullanýcýnýn arattýðý kelimenin boyutunu aldýk

	while(b2<satiradet){//soru2.txt boyutu kadar dönecek

for(j=0;j<harfadet[j]+30;j++){//1 satirdaki harf sayýsý kadar dönecek bazen eksik dönüyor diye +30 ekledim
karakter=fgetc(dosya);//dosyadan 1 karakter okuyacak
if(karakter==buldizi[i]){//karakterler eþit ise ife giricek
	
sayac2++;//sayac artýcak
i++;
}
else{
sayac2=0;// karakterler eþit deðil ise sayac sýfýrlanýr bu sayede art arda gelen karakterleri buluruz
i=0;
}

if(sayac2==boyut){//bulduðumuz harfler art arda geldiyse bu ife girer ve girdiðimiz metine eþitse sayacý arttýrrýr
adet++;
sayac2=0;
i=0;
}
}
b2++;
}
printf("aranan metin dosyada %d kez bulundu(hece kelime ve metin olarak toplu bir sekilde bulundu)",adet);
	
	tane=0;
		satir=0;
		j=0;
		adet=0;
		b2=0;           // bunlarý 3 nuamarad kullanacaðýmýz için burada sýfýrlýyorum
		i=0;
		sayac2=0;
		rewind(dosya);
	
	fclose(dosya);//dosyamýzý kapattýk
		
	}
	
	
	

	printf("\n");
	printf("\nyapmak istediginiz islemi seciniz: ");
	scanf("%d",&input);
	fflush(stdin);//scanf içini boþalttýk
}		
}






#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

// 2. DOSYAYI S�YAH EKRANDA DOLDURUNUZ !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int main(){
	int sayac2=0,b2=0,boyut,adet=0;//bul i�leminde kullan�lacak de�i�kenler adet aranan harf say�s� e�itlenince art�cak boyut girilen kelime boyutu olucak
	char karakter;// bul k�sm�ndaki harfleri kar��la�t�rmak i�in kullan�caz
int input,sayac=0,tuslama,harf=0,satir=0,tane,j=0,s=0,i=0;
char inputdizi[1000];//dosyam�z�n i�ine bir metin yazmak i�in kullan�c�dan alaca��m�z metni tutacak olan dizi
char inputdizi2[1000];//kullan�c�n�n olu�turca�� dosyan�n i�ini doldurmak i�in kullan�lacak dizi
char okunandizi[100];//dosyam�z�n i�indeki okudu�umuz metni bu diziye aktar�caz
char buldizi[500];//4 numarada bul i�in kullan�c�dan aranan kelimeyi istenecek bu dizide
char dosyaa[100];// 2. dosyam�z�n ismini almak i�in kullan�caz.
char tutucu[300];//1. dosyan�n satirlar�n� tutacak kar��la�t�rma i�in
char tutucu2[300];//2. dosyan�n satirlar�n� tutacak kar��la�t�rma i�in
int harfadet[50];//birinci dosyadaki her bir sat�rdaki harf adeti tutuluyor
int satiradet;// 1. dosyan�n sat�r adeti 
int harfadet2[50];// ikinci dosyadaki yani kullan�c�n�n olu�turdu�u dosyadaki her bir sat�rdaki harf adeti tutuluyor
int satiradet2;//2. dosyan�n sat�r adeti
char a,b;//harf kar��la�t�rmas� yaparken kullan�caz
char a1;//harf kar��la�t�rmas� yaparken kullan�caz
char b1;//harf kar��la�t�rmas� yaparken kullan�caz
FILE *dosya;//dosya1
FILE *dosya2;//dosya2

printf("1 tusu kaydet \n");
printf("2 tusu oku \n");
printf("3 tusu karsilastir \n");
printf("4 tusu bul \n");
printf("5 tusu cikis \n");
printf("\n");
printf("bir rakam giriniz: ");

scanf("%d",&input);//kullan�c�dan giri� de�eri ald�k (1,2,3,4,5) de�erleri i�in
fflush(stdin);//scanf in i�ini bo�altt�k enter sonras� i�in

while(input!=5){//5 rakam�na basarsa kullan�c� d�ng�den ��k�cak
	
	if(input==1){//kullan�c� 1 de�erini girdiyse buraya girer
		dosya=fopen("soru2.txt","a");// soru2.txt dosyam�z� sonuna eklemeli modda a�t�k
		printf("\ncumleyi giriniz: ");
		gets(inputdizi);//dizimizin i�ine kullan�c�dan metin ald�k
		fprintf(dosya,"%s\n",inputdizi);//dizimizin i�indeki metni dosyan�n i�ine yazd�k
	    fclose(dosya);//dosyam�z� kapatt�k
	}
	
	
	
	if(input==2){//kullan�c� 2 de�erini girdiyse buraya girer
		dosya=fopen("soru2.txt","r");//kapatt���m�z dosyam�z� okuma modunda a�t�k
		printf("\nDosyanin icerigi:\n");
		printf("\n");
		while(!feof(dosya)){//dosyan�n sonuna kadar okur
		fgets(okunandizi,100,dosya);//1 satir boyunca yaz�lan t�m kelimeleri dizinin i�ine atar
		if(!feof(dosya)){//dosyan�n sonuna geldi�inde fazladan 1 adet printf yazmas�n diye if s�n�rlad�m
		printf("%s",okunandizi);//dosyadan dizimizin i�ine okudu�umuz de�erleri siyah ekrana bast�rd�m
	}
	}
	fclose(dosya);//dosyam� kapatt�m
	}
	
	

	if(input==3){//3 rakam�n� girerse kullan�c� buraya girer
	
		dosya=fopen("soru2.txt","r");//dosyam�z� okuma modunda a�t�k
		while(!feof(dosya))//dosyan�n sonuna kadar okuma yapar
{
tane++;//bu d�ng�n�n amac� hangi satirda ka� kelime oldu�unu bulmakt�r !!!!!!!!
a=fgetc(dosya); //dosya dan karakter okur
if(a=='\n')  //alt sat�ra ge�mi� mi kontrol eder
{
satir++;//satir sayisi 1 artt�rma sebebimiz s�f�rdan ba�latmam�z 
tane--; //alta ge�me karakteri olan \n saymamak i�in
harfadet[j]=tane;// dizinin her indisi bir satiri temsil eder ve her satirda ka� kelime var kaydediyoruz
j++;
satiradet=satir;//satir sayisini kaydediyoruz
tane=0;//taneyi 0 l�yoruz ��nk� di�er sat�rlarda yeniden say�caz harf say�s�n�
}

}
fclose(dosya);//dosyam�z� kapatt�k
tane=0;
satir=0;// ikinci d�ng�de bu de�i�kenleri kullanaca��m�z i�in s�f�rlad�m
j=0;

	printf("dosya ismini giriniz (sonuna .txt yapabilirsiniz): ");
		dosya2=fopen(gets(dosyaa),"a");//ikinci dosya ismini kullan�c�dan ald�m
		while(s!=-1){//kullan�c� -1 de�erini girmedi�i s�rece kendi olu�turdu�u dosyas�n� dolduracak
         printf("2. dosyaya metin gir: ");
         gets(inputdizi2);//kullan�c�dan kendi olu�turdu�u dosyay� olu�tumas� i�in bir string al�yotuz
           fprintf(dosya2,"%s\n",inputdizi2);//kullan�c�n�n girdi�i metni dosya2 ye aktard�k
           printf("\n2.dosyanin alt satirindan devam etmek icin herhangi bir tusa basiniz \n");
            printf("2.dosyaya yazmayi birakmak icin (-1)'e basip enterleyiniz:  ");
           scanf("%d",&s);//-1 e basarsa daha yazamaz bir alt sat�rdan devam etmek i�in herhangi bir tusa basabilir.
           fflush(stdin);//scanf i�ini bo�altt�k
       }
         fclose(dosya2);//dosya2 mizi kapatt�k
         
      	dosya2=fopen(dosyaa,"r");//dosya2 yi okuma modunda a�t�k






		while(!feof(dosya2))//dosya2 nin sonuna kadar okuma yapar
{
tane++;  //bu d�ng�n�n amac� hangi satirda ka� kelime oldu�unu bulmakt�r !!!!!!!!
a=fgetc(dosya2); //dosya2 den karakter okur
if(a=='\n') //alt sat�ra ge�mi� mi kontrol eder
{
satir++; //satir sayisi 1 artt�rma sebebimiz s�f�rdan ba�latmam�z 
tane--; //alta ge�me karakteri olan \n saymamak i�in
harfadet2[j]=tane;// dizinin her indisi bir satiri temsil eder ve her satirda ka� kelime var kaydediyoruz
j++;
satiradet2=satir;//satir sayisini kaydediyoruz
tane=0;//taneyi 0 l�yoruz ��nk� di�er sat�rlarda yeniden say�caz harf say�s�n�
}

}
fclose(dosya2);//dosya2 yi kapatt�k
		dosya=fopen("soru2.txt","r");//dosyay� okuma modunda a�t�k
		dosya2=fopen(dosyaa,"r");//dosya2 yi okuma modunda a�t�k

            
			for(i=0;i<satiradet;i++){//d�ng� ile t�m sat�rlar� kar��la�t�racam
			       
					fgets(tutucu,50,dosya);//dosya nin s�radaki sat�r�n� tutucu dizisine at�yorum
				for(j=0;j<satiradet2;j++){//d�ng� ile t�m sat�rlar� kar��la�t�racam
					fgets(tutucu2,50,dosya2);//dosya2 nin s�radaki sat�r�n� tutucu2 dizisine at�yorum
					if(harfadet[i]==harfadet2[j]){// sat�rlardaki harf say�lar� e�it mi diye bak�yorum
						 if(strcmp(tutucu,tutucu2)==0){//sat�rlar� kar��la�t�r�yorum
						 	printf("\n%d --- %d satirlari esittir\n",(i+1),(j+1));
						 }
					}	
					
				}
				
				rewind(dosya2);//dosyadaki g�stergeyi ba�a al�yorum d�ng�yle e� zamanl� �al��mas� i�in
			}
		
		
		
		
		
		
		
s=0;//bir daha girdi�inde whileye girebilmesi i�in -1 i de�i�tirdik
 
 fclose(dosya);//dosya kapatt�k
 fclose(dosya2);//dosya2 kapatt�k
 
	}
	
	
	
	
	if(input==4){//4 rakam�na basarsa buraya girecek
	   dosya=fopen("soru2.txt","a");
	 fclose(dosya);
		dosya=fopen("soru2.txt","r");//dosyay� okuma modunda a�t�k
		printf("bulmak istediginiz kelime giriniz ");
		gets(buldizi);//kullan�c�dan aranan kelimeyi istedik
		
		tane=0;
		satir=0;
		j=0;
		
			while(!feof(dosya))//dosya2 nin sonuna kadar okuma yapar
{
tane++;  //bu d�ng�n�n amac� hangi satirda ka� kelime oldu�unu bulmakt�r !!!!!!!!
a=fgetc(dosya); //dosya2 den karakter okur
if(a=='\n') //alt sat�ra ge�mi� mi kontrol eder
{
satir++; //satir sayisi 1 artt�rma sebebimiz s�f�rdan ba�latmam�z 
tane--; //alta ge�me karakteri olan \n saymamak i�in
harfadet[j]=tane;// dizinin her indisi bir satiri temsil eder ve her satirda ka� kelime var kaydediyoruz
j++;
satiradet=satir;//satir sayisini kaydediyoruz
tane=0;//taneyi 0 l�yoruz ��nk� di�er sat�rlarda yeniden say�caz harf say�s�n�
}

}
rewind(dosya);	//dosyan�n ba��na geldik a�a��dak� d�ng�de ba�tan kontrol etmemiz laz�m
boyut=strlen(buldizi);	//kullan�c�n�n aratt��� kelimenin boyutunu ald�k

	while(b2<satiradet){//soru2.txt boyutu kadar d�necek

for(j=0;j<harfadet[j]+30;j++){//1 satirdaki harf say�s� kadar d�necek bazen eksik d�n�yor diye +30 ekledim
karakter=fgetc(dosya);//dosyadan 1 karakter okuyacak
if(karakter==buldizi[i]){//karakterler e�it ise ife giricek
	
sayac2++;//sayac art�cak
i++;
}
else{
sayac2=0;// karakterler e�it de�il ise sayac s�f�rlan�r bu sayede art arda gelen karakterleri buluruz
i=0;
}

if(sayac2==boyut){//buldu�umuz harfler art arda geldiyse bu ife girer ve girdi�imiz metine e�itse sayac� artt�rr�r
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
		b2=0;           // bunlar� 3 nuamarad kullanaca��m�z i�in burada s�f�rl�yorum
		i=0;
		sayac2=0;
		rewind(dosya);
	
	fclose(dosya);//dosyam�z� kapatt�k
		
	}
	
	
	

	printf("\n");
	printf("\nyapmak istediginiz islemi seciniz: ");
	scanf("%d",&input);
	fflush(stdin);//scanf i�ini bo�altt�k
}		
}






#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int *vektorOlustur(int elemanSayisi,int sayi);// vektorOlustur fonksiyonunun prototipi
int vektorDoldur( int *vector1, int *vector2, int elemanSayisi); // vektorDoldur fonksiyonunun prototipi
int noktasalCarpim(int *vector1, int *vector2, int elemanSayisi); // noktasalCarpim fonksiyonunun prototipi
int vektorYazdir( int *vector1, int *vector2, int elemanSayisi); // vektorYazdir fonksiyonunun prototipi
double normbul( int *vector1, int *vector2, int elemanSayisi);   // normbul fonksiyonunun prototipi
float cosbul( int *vector1, int *vector2,int elemanSayisi,float sonucc,int toplamm);
int main(){
	int eleman,toplam,i; //toplam degiskeni skaler �arp�m�n sonucunu tutacak elemanSayisi ise ka� adet vekt�r oldu�unu tutacak
	float sonuc,cevapp;// sonuc degiskeni 1. vekt�r�n norm de�erini tutacak cevapp ise 2 vekt�r aras�ndaki cos de�erini tutacak

	printf("Vektorlerin boyutunu giriniz: ");
	scanf("%d",&eleman);
	int *sonucVektor;//2 vekt�r�n �arp�m� sonucu olu�acak vekt�r
	int *vector1=vektorOlustur(eleman,1);//vektorOlustur fonksiyonuna kullan�c�dan al�nan boyut degerini giriyoruz
	int *vector2=vektorOlustur(eleman,2);////vektorOlustur2 fonksiyonuna kullan�c�dan al�nan boyut degerini giriyoruz
	vektorDoldur(vector1,vector2,eleman);//vektorDoldur fonksiyonuna boyutlar� olu�turulan vekt�rlerimizi ve boyutlar�n� g�nderiyoruz
	toplam=noktasalCarpim(vector1,vector2,eleman);//noktasalCarpim fonksiyonuna boyutlar� olu�turulan vekt�rlerimizi ve boyutlar�n� g�nderiyoruz
	sonucVektor=vektorOlustur(toplam,-1);//-1 de�eri g�ndermemin sebebi sadece sonuc vekt�r�n�n oldu�u if blo�una girmesi i�in
	
	for(i=0;i<eleman;i++){
	sonucVektor[i]=((vector1[i])*(vector2[i]));//tam say� olan sonucumuzdan bir vekt�r olu�turuyoruz vekt�rlerin ayn� indislerini �arparak
	}
	vektorYazdir(vector1,vector2,eleman);//vektorYazdir fonksiyonuna boyutlar� olu�turulan vekt�rlerimizi ve boyutlar�n� g�nderiyoruz
	
	
	
	printf("\n");
	printf("\n");
	printf("\n2 Vektorumuzun skaler carpimlari: %d\n",toplam);
	printf("skaler carpimin sonucu ile olusturdugumuz sonuc vektoru");
	printf("\n");
	printf("(");
	for(i=0;i<eleman;i++){
		printf("%d,",sonucVektor[i]);//2 vekt�r�n skaler �arp�m� sonucu ortaya ��kan tam sayi boyutunda vekt�r olu�turduktan sonra birde kar��l�kl� indisleri �arpt�k.
	}
		printf(")");
			printf("\n");
		printf("\n");
		
		
		
	sonuc=normbul(vector1,vector2,eleman);//normbul fonksiyonuna boyutlar� olu�turulan vekt�rlerimizi ve boyutlar�n� g�nderiyoruz
	printf("1.vektorun normu= %f",sonuc);
	cevapp=cosbul(vector1,vector2,eleman,sonuc,toplam);//cosbul fonksiyonuna fonksiyonuna boyutlar� olu�turulan vekt�rlerimizi ve boyutlar�n� g�nderiyoruz
	printf("\n");
	printf("\niki vektor arasindaki cos acisi: %f   ",cevapp);//2 vekt�r aras�ndaki cos a��s�n� bast�r�yoruz
}



int *vektorOlustur(int elemanSayisi,int sayi){//1. vekt�r� olu�turmak i�in geri d�n�� de�eri pointer olan fonk kulland�k
    if(sayi==1){//ilk fonsiyona giri�inde 1.vekt�r� 2. giri�inde ise 2. vekt�r� geri d�nd�rmesi i�in b�yle yapt�k
	int *vektor1;//1. vekt�r� olu�turduk
	vektor1=(int*)malloc(elemanSayisi*sizeof(int));//kullan�c�dan al�nan elemanSayisi boyutunda dinamik bellek y�ntemi yer ay�rd�k
	return vektor1;//1.vekt�r�n adresini main fonksiyondaki pointerin i�ine g�nderdik
}
else if(sayi==2){
		int *vektor2;//2. vekt�r� olusturduk
		vektor2=(int*)malloc(elemanSayisi*sizeof(int));//kullan�c�dan al�nan elemanSayisi boyutunda dinamik bellek y�ntemi yer ay�rd�k
		return vektor2;//2.vekt�r�n adresini main fonksiyondaki pointerin i�ine g�nderdik
}
else{
	int *sonucvektor;
	sonucvektor=(int*)malloc(elemanSayisi*sizeof(int));// en son olarak -1 de�eri ile buraya girecek ve 2 vekt�r�n skaler �arp�m� boyutunda vekt�r olu�acak
	return sonucvektor;//olu�an vekt�r� pointer fonksiyon kulland���m�z i�in adresini d�nd�rebiliyoruz.
}




	
}
int vektorDoldur( int *vector1, int *vector2, int elemanSayisi){
	int i;
	srand(time(NULL));
	for(i=0;i<elemanSayisi;i++){  //Burada for d�ng�s� ile pointer olan vekt�rlerimizi dizi gibi kullan�p i�ini rastgele say�larla doldurduk
		vector1[i]=rand()%9;
		vector2[i]=rand()%9;	
	}
	
	}
	 




int noktasalCarpim(int *vector1, int *vector2, int elemanSayisi){
	int i,tut,toplam=0;//tut de�i�keni vekt�rlerin e� indisteki elemanlar�n�n �arp�m�n� tutuyor toplam ise onlar�n toplam�n� tutuyor
	for(i=0;i<elemanSayisi;i++){
	tut=(vector1[i]*vector2[i]);    
	toplam=toplam+tut; // e� indislerde �arp�lan tut de�erlerini topluyoruz for d�ng�s� ile ve skaler �arp�m� bulmu� oluyoruz
	
	}
	return toplam; // toplam de�erini main fonksiyonumuza d�nd�r�yoruz
	
	
	
	
}

int vektorYazdir( int *vector1, int *vector2, int elemanSayisi){
	int i;
		printf("1. Vektorumuz: ");
	for(i=0;i<elemanSayisi;i++){
		printf("%d ",vector1[i]); // 1. vekt�r�m�z� for d�ng�s� ile bouyutu kadar d�nd�r�p ekrana yazd�r�yoruz
	}
	printf("\n");
	printf("2. Vektorumuz: ");
	for(i=0;i<elemanSayisi;i++){   //2. vekt�r�m�z� for d�ng�s� ile bouyutu kadar d�nd�r�p ekrana yazd�r�yoruz
		printf("%d ",vector2[i]);
	}
}

double normbul( int *vector1, int *vector2, int elemanSayisi){
	int i,tut;
	int toplam=0;
	int sonuc2;
	float sonuc;
	for(i=0;i<elemanSayisi;i++){
		tut=(vector1[i]*vector1[i]);      //burada vekt�rlerimizin skaler �arp�m�n� for d�ng�s� ile bulduktan sonra
		toplam=tut+toplam;                //haz�r fonk olan sqrt ile k�k�n� al�yoruz
	}
                                           // ve normunu bulmu� olduk
	sonuc=sqrt(toplam);
	
	return sonuc;                         //normunu main fonksiyonuna g�nderdik
	
	
	
	
	
	
}

float cosbul( int *vector1, int *vector2,int elemanSayisi,float sonucc,int toplamm){
	int tut,i;// tut e� indisli skaler �arp�mlar� tutar
	int  toplam=0;// toplam bu e� indisli �arp�mlar� toplar ve skaler �arp�m bulunmu� olur
	float cevap;// cos bulmak i�in kullan�lacak de�i�ken cevap
	float aktarma;  //  cevap de�i�kenini aktaraca��m�z de�i�ken
	float sonuc;
		for(i=0;i<elemanSayisi;i++){
		tut=(vector2[i]*vector2[i]);      //burada 1. vekt�r�m�z�n normunu main fonsiyonundan parametre olarak ald�k ve sonras�nda
		toplam=tut+toplam;                //2. vekt�r�n normunu for d�ng�s� ile tut de�erlerinin toplam� sonucu hesaplad�k
	}                                     

	sonuc=sqrt(toplam);                   // haz�r fonk ile k�k�n� ald�k 
	
	cevap=(toplamm/(sonucc*sonuc));      // cos bulma formul�m�z� kulland�k skaler �arp�m/norm1*norm2
	aktarma=cevap;
	return aktarma;                      //  cevap de�i�kenini aktarma adl� de�i�kene atay�p ard�ndan maine yollad�m
}

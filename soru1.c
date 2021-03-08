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
	int eleman,toplam,i; //toplam degiskeni skaler çarpýmýn sonucunu tutacak elemanSayisi ise kaç adet vektör olduðunu tutacak
	float sonuc,cevapp;// sonuc degiskeni 1. vektörün norm deðerini tutacak cevapp ise 2 vektör arasýndaki cos deðerini tutacak

	printf("Vektorlerin boyutunu giriniz: ");
	scanf("%d",&eleman);
	int *sonucVektor;//2 vektörün çarpýmý sonucu oluþacak vektör
	int *vector1=vektorOlustur(eleman,1);//vektorOlustur fonksiyonuna kullanýcýdan alýnan boyut degerini giriyoruz
	int *vector2=vektorOlustur(eleman,2);////vektorOlustur2 fonksiyonuna kullanýcýdan alýnan boyut degerini giriyoruz
	vektorDoldur(vector1,vector2,eleman);//vektorDoldur fonksiyonuna boyutlarý oluþturulan vektörlerimizi ve boyutlarýný gönderiyoruz
	toplam=noktasalCarpim(vector1,vector2,eleman);//noktasalCarpim fonksiyonuna boyutlarý oluþturulan vektörlerimizi ve boyutlarýný gönderiyoruz
	sonucVektor=vektorOlustur(toplam,-1);//-1 deðeri göndermemin sebebi sadece sonuc vektörünün olduðu if bloðuna girmesi için
	
	for(i=0;i<eleman;i++){
	sonucVektor[i]=((vector1[i])*(vector2[i]));//tam sayý olan sonucumuzdan bir vektör oluþturuyoruz vektörlerin ayný indislerini çarparak
	}
	vektorYazdir(vector1,vector2,eleman);//vektorYazdir fonksiyonuna boyutlarý oluþturulan vektörlerimizi ve boyutlarýný gönderiyoruz
	
	
	
	printf("\n");
	printf("\n");
	printf("\n2 Vektorumuzun skaler carpimlari: %d\n",toplam);
	printf("skaler carpimin sonucu ile olusturdugumuz sonuc vektoru");
	printf("\n");
	printf("(");
	for(i=0;i<eleman;i++){
		printf("%d,",sonucVektor[i]);//2 vektörün skaler çarpýmý sonucu ortaya çýkan tam sayi boyutunda vektör oluþturduktan sonra birde karþýlýklý indisleri çarptýk.
	}
		printf(")");
			printf("\n");
		printf("\n");
		
		
		
	sonuc=normbul(vector1,vector2,eleman);//normbul fonksiyonuna boyutlarý oluþturulan vektörlerimizi ve boyutlarýný gönderiyoruz
	printf("1.vektorun normu= %f",sonuc);
	cevapp=cosbul(vector1,vector2,eleman,sonuc,toplam);//cosbul fonksiyonuna fonksiyonuna boyutlarý oluþturulan vektörlerimizi ve boyutlarýný gönderiyoruz
	printf("\n");
	printf("\niki vektor arasindaki cos acisi: %f   ",cevapp);//2 vektör arasýndaki cos açýsýný bastýrýyoruz
}



int *vektorOlustur(int elemanSayisi,int sayi){//1. vektörü oluþturmak için geri dönüþ deðeri pointer olan fonk kullandýk
    if(sayi==1){//ilk fonsiyona giriþinde 1.vektörü 2. giriþinde ise 2. vektörü geri döndürmesi için böyle yaptýk
	int *vektor1;//1. vektörü oluþturduk
	vektor1=(int*)malloc(elemanSayisi*sizeof(int));//kullanýcýdan alýnan elemanSayisi boyutunda dinamik bellek yöntemi yer ayýrdýk
	return vektor1;//1.vektörün adresini main fonksiyondaki pointerin içine gönderdik
}
else if(sayi==2){
		int *vektor2;//2. vektörü olusturduk
		vektor2=(int*)malloc(elemanSayisi*sizeof(int));//kullanýcýdan alýnan elemanSayisi boyutunda dinamik bellek yöntemi yer ayýrdýk
		return vektor2;//2.vektörün adresini main fonksiyondaki pointerin içine gönderdik
}
else{
	int *sonucvektor;
	sonucvektor=(int*)malloc(elemanSayisi*sizeof(int));// en son olarak -1 deðeri ile buraya girecek ve 2 vektörün skaler çarpýmý boyutunda vektör oluþacak
	return sonucvektor;//oluþan vektörü pointer fonksiyon kullandýðýmýz için adresini döndürebiliyoruz.
}




	
}
int vektorDoldur( int *vector1, int *vector2, int elemanSayisi){
	int i;
	srand(time(NULL));
	for(i=0;i<elemanSayisi;i++){  //Burada for döngüsü ile pointer olan vektörlerimizi dizi gibi kullanýp içini rastgele sayýlarla doldurduk
		vector1[i]=rand()%9;
		vector2[i]=rand()%9;	
	}
	
	}
	 




int noktasalCarpim(int *vector1, int *vector2, int elemanSayisi){
	int i,tut,toplam=0;//tut deðiþkeni vektörlerin eþ indisteki elemanlarýnýn çarpýmýný tutuyor toplam ise onlarýn toplamýný tutuyor
	for(i=0;i<elemanSayisi;i++){
	tut=(vector1[i]*vector2[i]);    
	toplam=toplam+tut; // eþ indislerde çarpýlan tut deðerlerini topluyoruz for döngüsü ile ve skaler çarpýmý bulmuþ oluyoruz
	
	}
	return toplam; // toplam deðerini main fonksiyonumuza döndürüyoruz
	
	
	
	
}

int vektorYazdir( int *vector1, int *vector2, int elemanSayisi){
	int i;
		printf("1. Vektorumuz: ");
	for(i=0;i<elemanSayisi;i++){
		printf("%d ",vector1[i]); // 1. vektörümüzü for döngüsü ile bouyutu kadar döndürüp ekrana yazdýrýyoruz
	}
	printf("\n");
	printf("2. Vektorumuz: ");
	for(i=0;i<elemanSayisi;i++){   //2. vektörümüzü for döngüsü ile bouyutu kadar döndürüp ekrana yazdýrýyoruz
		printf("%d ",vector2[i]);
	}
}

double normbul( int *vector1, int *vector2, int elemanSayisi){
	int i,tut;
	int toplam=0;
	int sonuc2;
	float sonuc;
	for(i=0;i<elemanSayisi;i++){
		tut=(vector1[i]*vector1[i]);      //burada vektörlerimizin skaler çarpýmýný for döngüsü ile bulduktan sonra
		toplam=tut+toplam;                //hazýr fonk olan sqrt ile kökünü alýyoruz
	}
                                           // ve normunu bulmuþ olduk
	sonuc=sqrt(toplam);
	
	return sonuc;                         //normunu main fonksiyonuna gönderdik
	
	
	
	
	
	
}

float cosbul( int *vector1, int *vector2,int elemanSayisi,float sonucc,int toplamm){
	int tut,i;// tut eþ indisli skaler çarpýmlarý tutar
	int  toplam=0;// toplam bu eþ indisli çarpýmlarý toplar ve skaler çarpým bulunmuþ olur
	float cevap;// cos bulmak için kullanýlacak deðiþken cevap
	float aktarma;  //  cevap deðiþkenini aktaracaðýmýz deðiþken
	float sonuc;
		for(i=0;i<elemanSayisi;i++){
		tut=(vector2[i]*vector2[i]);      //burada 1. vektörümüzün normunu main fonsiyonundan parametre olarak aldýk ve sonrasýnda
		toplam=tut+toplam;                //2. vektörün normunu for döngüsü ile tut deðerlerinin toplamý sonucu hesapladýk
	}                                     

	sonuc=sqrt(toplam);                   // hazýr fonk ile kükünü aldýk 
	
	cevap=(toplamm/(sonucc*sonuc));      // cos bulma formulümüzü kullandýk skaler çarpým/norm1*norm2
	aktarma=cevap;
	return aktarma;                      //  cevap deðiþkenini aktarma adlý deðiþkene atayýp ardýndan maine yolladým
}

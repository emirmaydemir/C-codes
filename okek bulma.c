#include<stdio.h>
 int okek(int x,int y);
 
 main(){
int sayi1,sayi2,sonuc,a;
printf("1.sayiyi giriniz=");
scanf("%d",&sayi1);
printf("2.sayiyi giriniz=");
scanf("%d",&sayi2);

sonuc=okek(sayi1,sayi2);
a=sayi1*sayi2/sonuc;
printf("%d ve %d nin okeki=%d",sayi1,sayi2,a);	
}
int okek(int x,int y){
int sonuc;
int i;
  for(i=1;i<=x&&i<=y;i++){
  	 if(x%i==0&&y%i==0){
  	 	sonuc=i;
	   }
  }
return sonuc;	
}
	
	
	


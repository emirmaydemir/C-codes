#include <stdio.h>
#include <conio.h>

int main(){
    
    int sayi, gecici, kalan, sonuc;
    sonuc = 0;
    int kontrol = -1;
    scanf("%d", &sayi);
    gecici = sayi;
    while ( gecici > 0 )
	{
        kalan = gecici % 10;
        if(kontrol ==kalan){
        printf("%d\n", kalan);
    }
        kontrol = kalan;
        gecici /= 10;    
    }
    
    return 0; 
}

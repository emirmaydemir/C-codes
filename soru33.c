#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void aynidegerlerisil(int *p);

int main(){
 int *dizi;
 int i;
 srand(time(NULL));
 
 dizi=(int*)malloc(20*sizeof(int));
 for(i=0;i<20;i++){
 	dizi[i]=rand()%10+1;
 }
 printf("DIZIMIZIN ELEMANLARI\n");
 for(i=0;i<20;i++){
 	printf("%d  ",dizi[i]);
 }
 aynidegerlerisil(dizi);
 free(dizi);

}



	
void aynidegerlerisil(int *p){
	int i,j,sayac=0;
	for(i=0;i<19;i++){
		for(j=i+1;j<20;j++){
			if(p[i]==p[j]){
				p[j]=0;
			}
		}
	}
	for(i=0;i<20;i++){
		if(p[i]!=0){
			sayac++;
		}
	}
	
	int *yenidizi;
	int a=0;
	yenidizi=(int*)malloc(sayac*sizeof(int));
	
		for(i=0;i<20;i++){
		if(p[i]!=0){
			yenidizi[a]=p[i];
			a++;
		}
	}
	printf("\n");
	printf("\n");
	printf("ELEMANLARIN TEKRARI SILINMIS HALI\n");
	for(i=0;i<a;i++){
		printf("%d  ",yenidizi[i]);
	}
	free(yenidizi);
	
}
	
	
	



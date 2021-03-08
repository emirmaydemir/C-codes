#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

void degerata(int **p,int a,int b);
void enbuyukikincieleman(int **p1,int a1,int b1);
int satirtoplam(int **p2,int a2,int b2);

int main(){
	int satir,sutun,i,j,toplam;
	int **tutucu;
	printf("satir sayisini gir: ");
	scanf("%d",&satir);
	printf("sutun sayisini gir: ");
	scanf("%d",&sutun);
    tutucu=(int**)malloc(sizeof(int*)*satir);
    for(i=0;i<satir;i++){
    	tutucu[i]=(int *)malloc(sizeof(int)*sutun);
	}
	
	degerata(tutucu,satir,sutun);
	
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d ",tutucu[i][j]);
		}
		printf("\n");
	}
      enbuyukikincieleman(tutucu,satir,sutun);
      toplam=satirtoplam(tutucu,satir,sutun);
      printf("%d",toplam);
      
      free(tutucu);
		
}


void degerata(int **p,int a,int b){
	int i,j,min,max;
		srand(time(NULL));
		printf("matrisin almasini istediginiz en buyuk degeri giriniz: ");
		scanf("%d",&max);
		printf("matrisin almasini istediginiz en kucuk degeri giriniz: ");
		scanf("%d",&min);
		
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				p[i][j]=rand()%(max-min+1)+min;
			}
		}
	}
		
		void enbuyukikincieleman(int **p1,int a1,int b1){
			int i,j,max=0,max2=0;
			for(i=0;i<a1;i++){
				for(j=0;j<b1;j++){
						if(p1[i][j]>max){
							max=p1[i][j];
					}
				}
			}
			for(i=0;i<a1;i++){
				for(j=0;j<b1;j++){
						if(p1[i][j]>max2&&p1[i][j]<max){
							max2=p1[i][j];
					}
				}
			}
			printf("Matristeki en buyuk 2. eleman = %d \n",max2);
		}
		
		int satirtoplam(int **p2,int a2,int b2){
			int satir,j,toplam=0;
			printf("Hangi satirdaki elemanlari toplayalim: ");
			scanf("%d",&satir);
			for(j=0;j<b2;j++){
				toplam=toplam+p2[satir-1][j];
			}
			printf("\n");
			printf("%d satirindaki elemanlarin toplami= ",satir);
			return toplam;
			
			
			
			
			
			
			
			
		}
		
	
  
  







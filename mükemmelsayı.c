#include<stdio.h>
int main(){
int i;
int j;
for(i=1;i<15000;i++){
int toplam=0;
for(j=1;j<i;j++){
if(i%j==0){
toplam=toplam+j;
}
}

if(toplam==i){
printf("%d\n",i);
}
}
return 0;

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

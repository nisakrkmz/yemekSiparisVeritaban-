#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int main(){
 	
 	int i,sayi;
 	float toplam=0,ort;
 	
 	for (i=1;i<=10;i++){
 		printf("bir sayi girin:",sayi);
 		scanf("%d",&sayi);
		 toplam=toplam+sayi;
	 }
	 
	 ort=toplam/10;
	 printf("ort=%.1f",ort);
 	return 0;
 }

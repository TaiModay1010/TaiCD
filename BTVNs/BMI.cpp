#include <stdio.h>

int main(){
	float weight;
	printf("Nhap can nang cua ban(kg):");
	scanf("%f",&weight);
	
	float height;
	printf("Nhap chieu cao cua ban(m)");
	scanf("%f",&height);
	
	float bmi = weight/(height*height);
	
	if(bmi < 18.5){
		
		printf("ban bi suy dinh duong");
		
	}else if(bmi < 25){
		
		printf("Ban Binh Thuong");
		
	}else if(bmi < 30){
		
		printf("Ban Bi Thua Can");
		
	}else{
		
		printf("Ban Bi Beo Phi");
	}
	
}

#include <stdio.h>
#include <math.h>

int main(){
	
	printf("Nhap so nam:");
	int year;
	scanf("%d",&year);
	
	if(year%4==0 && (year%100 ==0 && year %400 ==0)){
		printf("la nam nhuan!");
	}else{
		printf("Khong phai nam nhuan!");
	}
	
}

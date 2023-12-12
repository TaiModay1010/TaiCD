#include <stdio.h>
#include <math.h>


int main(){
	int a;
	printf("Nhap a =");
	scanf("%d",&a);
	
	int b;
	printf("Nhap b =");
	scanf("%d",&b);
	
	int c;
	printf("Nhap c =");
	scanf("%d",&c);
	
	int d = b*b-4*a*c;
	
	float X1 = (-b+sqrt(d))/2*a;
	
	float X2 = (-b-sqrt(d))/2*a;
	
	if(d>=0){
		printf("X1 = %f \n X2 = %f",X1,X2);
	}else{
		printf("phuong trinh vo nghiem");
	}

}

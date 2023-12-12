#include <stdio.h>
#include <math.h>

int main(){
	float a;
	printf("Nhap a =");
	scanf("%f",&a);
	
	float b;
	printf("Nhap b =");
	scanf("%f",&b);
	
	float c;
	printf("Nhap c =");
	scanf("%f",&c);
	
	if(a+b>c && b+c>a && a+c>b){
		float P = a+b+c;
		float P2 = P/2;
		float S = sqrt(P2*(P2-a)*(P2-b)*(P2-c));
		
		printf("chu vi = %f\n",P);
		printf("dien tich = %f",S);
	}else{
		printf("day khong phai la do dai 3 canh tam giac");
	}
}

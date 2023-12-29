#include <stdio.h>
#include <math.h>


float S(int a, int b, int c){
	float p =(a+b+c)/2;
	float s = sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}

int main(){
	int a = 4,b = 5,c = 6;
	float z=S(a,b,c);
	printf("Dien tich = %f",z);
}

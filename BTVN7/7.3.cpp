#include <stdio.h>
#include <math.h>

int main(){
	printf("Nhap 1 so:");
	int n;
	scanf("%d",&n);
	int a;
	int b;
	while(n>0){
		a = n % 10;
		n = n/10;
		b +=a;
	}
	printf("%d",b);
	
}

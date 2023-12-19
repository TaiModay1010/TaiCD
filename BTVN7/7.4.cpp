#include <stdio.h>
#include <math.h>

int main(){
	printf("Nhap 1 so:");
	int n;
	scanf("%d",&n);
	
	while(n>=10){
		n = n/10;
	}
	printf(" %d",n);
}

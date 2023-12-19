#include <stdio.h>
#include <math.h>

int main(){
	printf("Nhap 1 so tu nhien n:");
	
	int n;
	scanf("%d",&n);
	int i;
	printf("so nghich dao cua n la:");
	
	while(n>0){
		i = n%10;
		n = n/10;
		printf("%d",i);
	}
}

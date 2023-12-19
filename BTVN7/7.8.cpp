#include <stdio.h>
#include <math.h>

int main(){
	
	printf("Nhap 1 so tu nhien n: ");
	int n;
	scanf("%d",&n);
	
	int a = 0;
	int b = 1;
	int i =2;
	int c;
	
	while(i<n){
		c = a + b;
		a = b;  
		b = c;
		i++;
	}
	printf("so thu tu cua %d trong fibonacci la:%d",n,c);
}

#include <stdio.h>
#include <math.h>

int main(){
	
	printf("Nhap 1 so tu nhien n:");
	int n;
	scanf("%d",&n);
	int a = 1;
	int b;
	
	if(n<0){
		printf("Giai Thua khong duoc tinh cho so am");
	}else{
		while(a<=n){
			b *= a;
			a++;
		}
	}
	printf("giai thua cua la =%d",b);
}

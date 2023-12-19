#include <stdio.h>
#include <math.h>

int main() {
	printf("Nhap 1 so tu nhien:");
	int n;
	scanf("%d",&n);
	int i = 1;
	printf("cac uoc so cua so vua nhap la:");
	while(i<=n) {
		if(n % i==0) {
			printf(",%d",i);
		}
		i++;
	}
}

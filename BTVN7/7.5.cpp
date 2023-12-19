	#include <stdio.h>
#include <math.h>

int main(){
	
	printf("Nhap 1 so tu nhien:");
	int n;
	scanf("%d",&n);
	int a;
	
	while(n>0){
		int b = n%10;
		if(b >a){
			a = b;
		}
		n/=10;
	}
	printf("Chu So lon nhat la:%d",a);
}

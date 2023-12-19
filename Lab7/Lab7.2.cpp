#include <stdio.h>
#include <math.h>

int main(){
	printf("Nhap 1 so:");
	int n;
	scanf("%d",&n);
	int i = n-1;
	
	while(i<n){
		if(i%2==0 && i%3==0){
			printf("so can tim la:%d",i);
			
			break;
		}
		i--;
	}
}

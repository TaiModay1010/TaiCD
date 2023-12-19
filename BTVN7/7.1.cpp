   #include <stdio.h>
#include <math.h>

int main(){
	printf("Nhap 1 so:");
	int n;
	scanf("%d",&n);
	int a;
	
	int i = 1;
	
	while(i <=n){
		
		if(n %i ==0){
			a= a+i;
		}
		i++;
	}
	printf("Tong cac uoc so cua so vua nhap la:%d",a);
}

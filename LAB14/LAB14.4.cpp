#include <stdio.h>
#include <math.h>

int UCLN(int a, int b){
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
}

int main(){
	int a = 15, b=20;
	int z = UCLN(a,b);
	printf("UCLN Cua %d va %d la %d",a,b,z);
}

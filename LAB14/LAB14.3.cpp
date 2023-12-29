#include <stdio.h>

int SumN(int n){
	while(n>0){
		int a = n%10;
		n = n/10;
		a +=a;
		
		return a;
	}
}

int main(){
	int n =123;
	int z = SumN(n);
	printf("tong cac chu so cua la = %d",z);
}

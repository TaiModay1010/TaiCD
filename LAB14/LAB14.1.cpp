#include <stdio.h>

int P(int a,int b, int c){
	int p = a + b + c;
	
	return p;
}

int main(){
	int a = 4, b=5, c = 6;
	int z = P(4,5,6);
	printf("chu vi = %d",z);
}

#include <stdio.h>
#include <math.h>

int BCNN(int a, int b){
	for(int i=a;;i++){
		if(i%a==0 && i%b==0){
			return i;
		}
	}
}

int main(){
	int a = 15, b=20;
	int z = BCNN(a,b);
	printf("BCNN Cua %d va %d la %d",a,b,z);
}

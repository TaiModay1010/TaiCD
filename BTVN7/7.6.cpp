#include <stdio.h>
#include <math.h>
 int main(){
 	printf("nhap 1 so:");
 	int n;
 	scanf("%d",&n);
 	
 	int a =1;
 	float S;
 	
 	while(a<=n){
 		S += 1.0/a;
 		a++;
	 }
	 printf("%f",S);
 }

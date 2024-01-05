#include <stdio.h>

float average(int s[],int n){
	float a;
	float b;
	for(int i=0;i<n;i++){
		a+=s[i];
		b=a/n;
	}
	printf("Average number of array: %f",b);
}
int main(){
	int n;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	
	int ary[n];
	printf("Nhap gia tri phan tu:\n");
	for(int i=0;i<n;i++){
		printf("ary[%d]: ",i);
		scanf("%d",&ary[i]);
	}
	
	average(ary,n);
}

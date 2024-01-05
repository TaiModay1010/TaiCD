#include <stdio.h>
#include <math.h>

int main(){
	printf("Nhap so luong phan tu:");
	int n;
	scanf("%d",&n);
	
	int arr[n];
	
	printf("nhap gia tri phan tu:\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n/2;i++){
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;	
	}
	
	for(int i =0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

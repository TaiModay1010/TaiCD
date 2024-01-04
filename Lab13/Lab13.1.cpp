#include <stdio.h>

int main(){
	printf("Nhap so luong phan tu cua mang:");
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Nhap gia tri phan tu mang:\n");
	for(int i=0;i<n;i++){
		printf("gia tri thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Mang vua nhap la:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\nmang sau khi doi thu tu la:\n");
	for(int i=0;i<n;i++){
		arr[i]=arr[n-1-i];
		printf("%d ",arr[i]);
	}
	
}

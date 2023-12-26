#include <stdio.h>

int main(){
	printf("Nhap so luong phan tu mang: ");
	int n;
	scanf("%d",&n);
	
	int arr[n];
	printf("Nhap cac phan tu cua mang:");
	
	for(int i =0;i<n;i++){
		printf("gia tri phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	int Min;
	for(int i=0;i<n;i++){
		if(arr[i]<Min&&arr[i]>0){
			Min=arr[i];
		}
	}
	printf("So Duong Nho Nhat La: %d",Min);
}

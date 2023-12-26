#include <stdio.h>

int main(){
	printf("Nhap so phan tu cua mang: ");
	int n;
	scanf("%d",&n);
	
	int arr[n];
	printf("nhap gia tri phan tu mang:");
	
	for(int i=0;i<n;i++){
		printf("phan tu thu la: %d ",i);
		scanf("%d",&arr[i]);
	}
	int Sole =0;
	
	for(int i=0;i<n;i++){
		if(arr[i]%2==1){
			Sole=arr[i];
		}
	}
	printf("so le cuoi cung cua mang la:%d",Sole);
}

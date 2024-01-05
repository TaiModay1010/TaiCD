#include <stdio.h>

int main(){
	int n;
	printf("Nhap so luong phan tu cua mang:");
	scanf("%d",&n);
	
	int arr[n];
	printf("Nhap gia tri phan tu:\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	int lasteven =0;
	int flag =0;
	for(int i =n-1;i>0;i--){
		if(arr[i]%2==0){
			lasteven=arr[i];
			flag++;
			break;
		}
	}
	
	if(flag!=0){
		printf("So Chan cuoi cung cua Mang la:	%d",lasteven);
	}else{
		printf("Mang khong co so chan!");
	}
}

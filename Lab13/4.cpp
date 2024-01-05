#include <stdio.h>

int main(){
	printf("Nhap so luong phan tu:");
	int n;
	scanf("%d",&n);
	int a=0;
	int b =0;
	
	int arr[n];
	
	printf("Nhap gia tri phan tu:\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i =0;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[j]=arr[i]){
				printf("%d	",arr[i]);
				break;
			}
		}
	}
}

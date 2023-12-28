#include <stdio.h>

int main() {
	printf("Nhap so luong phan tu:");
	int n;
	scanf("%d",&n);
	int arr[n];
	
	printf("Nhap gia tri cac phan tu:\n");
	
	for(int  i=0;i<n;i++){
		printf("gia tri thu %d la: ",i);
		scanf("%d",&arr[i]);
	}

	int j,temp;

	for (int i=0; i<5; i++) {
		for (int j=0; j<5-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i =0;i<n;i++){
		printf("%d ",arr[i]);
	}
	int x;
	printf("\nnhap gia tri X: ");
	scanf("%d",&x);
	int low =0;
	int high = n-1;
	int mid = (n-1)/2;
	
	if(x<arr[mid]){
		printf("gia tri xa X nhat la: %d",arr[high]);
	}else{
		printf("gia tri xa X nhat la: %d",arr[low]);
	}
}

#include <stdio.h>
#include <math.h>

int main() {
	printf("Nhap su luong phan tu:");
	int n,j,temp;
	scanf("%d",&n);

	int arr[n];
	printf("nhap gia tri cac phan tu:\n");
	for(int i=0; i<n; i++) {
		printf("gia tri thu %d la:",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<n-i-1; j++) {
			if(arr[j]>arr[j+1]) {
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	int x;
	printf("Nhap X = ");
	scanf("%d",&x);
	int ganX;
	
	for(int i=0;i<n;i++){
		int y = abs(arr[i]-x);
		if(arr[i]>y){
			ganX= arr[i];
			printf("%d ",arr[i]);
		}
	}

}

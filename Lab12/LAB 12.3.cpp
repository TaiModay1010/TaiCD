#include <stdio.h>
#include <math.h>

int main(){
	printf("Nhap so luong mang:");
	int n,i,j,temp;
	scanf("%d",&n);
	
	printf("Nhap gia tri phan tu:\n");
	int arr[n];
	for(int i=0;i<n;i++){
		printf("gia tri phan tu thu %d la: ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("mang sau khi duoc sap xep la: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	int a= arr[0]-1;
	int b=arr[n-1]+1;
	printf("\ndoan can tim [a,b] la: [%d,%d]",a,b);
	
}

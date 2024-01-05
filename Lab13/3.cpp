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
	
	printf("mang vua nhap la:  ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			a++;
		}else if(arr[i]<0){
			b++;
		}
	}
	printf("\nmang co %d so duong va co %d so am!",a,b);
}

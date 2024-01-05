#include <stdio.h>

int TBC(int arr[],int n){
	int a=0;
	int b;
	for(int i=0;i<n;i++){
		a+=arr[i];
		b=a/n;
	}
	printf("trung binh cong cac gia tri trong mang la: %d",b);
}

int main(){
	printf("Nhap so luong phan tu cua mang:");
	int n;
	scanf("%d",&n);
	
	int ary[n];
	
	printf("Nhap gia tri phan tu:\n");
	for(int i=0;i<n;i++){
		printf("ary[%d]: ",i);
		scanf("%d",&ary[i]);
	}
	
	TBC(ary,n);
}

#include <stdio.h>

int Inmang(int arr[],int n) {
	for(int i=0; i<n; i++) {
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Mang Vua Nhap La:	");
	for(int i =0; i<n; i++) {
		printf("%d ",arr[i]);
	}
}


int main() {
	printf("Nhpa so phan tu cua mang:");
	int n;
	scanf("%d",&n);

	int ary[n];

	Inmang(ary,n);
}

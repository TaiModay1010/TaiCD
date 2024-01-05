#include <stdio.h>

int swap(int arr[], int n) {
	for(int i=0; i<n/2; i++){
		int temp = arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;

	}
}

int main() {
	int n;
	printf("Nhap so luong phann tu cua mang:");
	scanf("%d",&n);

	int ary[n];
	printf("Nhap gia tri phan tu:\n");
	for(int i=0; i<n; i++) {
		printf("ary[%d]: ",i);
		scanf("%d",&ary[i]);
	}
	swap(ary,n);
	printf("Mang sau khi doi cho la:\n");
	for(int i=0; i<n; i++) {
		printf("%d ",ary[i]);
	}

}

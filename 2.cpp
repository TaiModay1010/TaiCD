#include <stdio.h>
#include <math.h>

int timX(int arr[], int n, int x){
	for(int i=0;i<n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return 1;
		}
	}
	return 0;
}

int main(){
	int n,x;
	printf("nhap X: ");
	scanf("%d",&x);
	printf("Nhap so luong phan tu cua mang:");
	scanf("%d",&n);
	
	int ary[n];
	
	printf("Nhap gia tri phan tu mang:\n");
	
	if(timX(ary,n,x)){
		printf("X co trong mang!");
	}else{
		printf("X khong co trong mang");
	}
	
}

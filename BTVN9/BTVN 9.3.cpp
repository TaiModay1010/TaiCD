#include <stdio.h>

int main(){
	printf("Nhap So phan tu:");
	int n;
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Nhap gia tri cac phan tu:\n");
	for(int i=0;i<n;i++){
		printf("Nhap gia tri phan tu thu %d:",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Nhap 1 so X:");
	int x;
	scanf("%d",&x);
	int TimX;
	for(int i =0;i<n;i++){
		if(x==arr[i]){
			TimX =1;
			break;
	}
}
if(TimX ==1){
	printf("X nam trong mang!");
}else{
	printf("X khong nam trong mang");
}
}

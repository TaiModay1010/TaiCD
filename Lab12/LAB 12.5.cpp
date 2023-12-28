#include <stdio.h>

int main(){
	printf("Nhap So Phan Tu cua mang:");
	int n;
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("gia tri phan thu %d la: ",i);
		scanf("%d",&arr[i]);
		for(int j=0;j<i;j++){
			if(arr[j]==arr[i]){
				printf("vui long nhap lai!\n");
				i--;
				break;
			}
		}
		
	}
	printf("mang vua nhap la:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

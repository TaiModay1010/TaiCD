#include <stdio.h>
#include <math.h>

int main(){
	printf("nhap so luong mang: ");
	int n,i,j,temp;
	scanf("%d",&n);
	
	int arr[n];
	printf("Nhap gia tri mang:\n");
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
	if(0<=(arr[0]+arr[n-1])/2){
		int x=arr[n-1]+1;
		int y =-x;
		printf("khong [-x,x] can tim la: [%d,%d]",y,x);
	}else{
		int x = arr[0]-1;
		int y = -x;
		printf("khong [-x,x] can tim la: [%d,%d]",x,y);
	}
}

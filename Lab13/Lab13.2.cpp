#include <stdio.h>

int main(){
	printf("Nhap so luong mang:");
	int n,b,c;
	b=0;
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j]){
				c=arr[j];
				b++;
			}
		}
	}
}

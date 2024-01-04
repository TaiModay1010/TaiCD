#include<stdio.h>
#include<math.h>

int sapxep(int n, int arr[]){
	
	for(int i=0; i< n ;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n-1;i++){
		for(int j= 0 ; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1 ] = temp; 
			}
		}
	}
}

int main(){
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	int ary[n];
	sapxep(n, ary);
	
	printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d \t ", ary[i]);
    }
}

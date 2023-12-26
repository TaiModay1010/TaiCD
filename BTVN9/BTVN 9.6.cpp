#include <stdio.h>

int main(){
	printf("Nhap so luong phan tu mang: ");
	int n;
	scanf("%d",&n);
	
	int arr[n];
	printf("Nhap cac phan tu cua mang:\n");
	
	for(int i =0;i<n;i++){
		printf("gia tri phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	int soduong=0;
	int max;
	
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			soduong++;
			if(soduong>max){
				max=soduong;
			}
		}else{
			soduong=0;
		}
	}
	printf("So luong so duong lien tiep nhieu nhat la: %d",max);
	
}

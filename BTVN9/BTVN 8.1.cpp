#include <stdio.h>
#include <math.h>

int main(){
	printf("nhap so phan tu cua mang:");
	int n;
	scanf("%d",&n);
	
	int So_le[n];
	
	printf("Nhap Cac Phan Tu Cua Mang:");
	for(int i =0;i<n;i++){
		printf("Phan Tu Thu %d: ",i);
		scanf("%d",&So_le[i]);
	}
	
	int sum=0;
	int count=0;
	
	for(int i=0;i<n;i++){
		if(So_le[i]%2!=0){
			sum = sum + So_le[i];
			count++;
		}
	}
	float tbcSole = sum/count;
	
	printf("trung binh cong so le trong mang la: %f",tbcSole);
}

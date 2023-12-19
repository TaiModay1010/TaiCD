#include <stdio.h>
#include <math.h>

int main() {

	printf("Nhap vao so a:");

	int a;
	int b;
	int x = 1;
	int Ucln;

	scanf("%d",&a);
	printf("Nhap vao so b:");
	scanf("%d",&b);

	while(x<=a && x<=b) {
		if(a%x==0 && b%x==0) {
			Ucln = x;
		}
		x++;
	}
	int BCNN = (a*b)/Ucln;

	printf("UCLN cua %d va %d la %d",a,b,Ucln);
	printf("\nBCNN cua %d va %d la %d",a,b,BCNN);


}

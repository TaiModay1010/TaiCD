#include <stdio.h>

int main() {
	int n;
	int flag =0;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);

	int arr[n];

	printf("Nhap cac phan tu cua mang:\n");
	for (int i = 0; i < n; i++) {
		printf("Phan tu thu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n - 2; i++) {
		int a = arr[i];
		int b = arr[i + 1];
		int c = arr[i + 2];

		if ((a + b > c) && (a + c > b) && (b + c > a)) {
			printf(" 3 gia tri phan tu lien tiep lam ba canh cua mot tam giac: %d, %d, %d\n", a, b, c);
			flag++;
		}
	}
	if(flag==0) {
		printf("Khong 3 gia tri phan tu lien tiep lam ba canh cua mot tam giac.\n");
	}

}


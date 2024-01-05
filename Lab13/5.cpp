#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
	if (num < 2) {
		return false;
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);

	int arr[n];

	printf("Nhap cac phan tu cua mang:\n");
	for (int i = 0; i < n; i++) {
		printf("arr[i]: ", i + 1);
		scanf("%d", &arr[i]);
	}

	int maxPrime = -1;

	for (int i = 0; i < n; i++) {
		if (isPrime(arr[i]) && arr[i] > maxPrime) {
			maxPrime = arr[i];
		}
	}

	if (maxPrime != -1) {
		printf("So nguyen to lon nhat trong mang là: %d\n", maxPrime);
	} else {
		printf("Khong có so nguyen to trong mang.\n");
	}

	return 0;
}


#include <stdio.h>

int main(){
	
	printf("Nhap  1 Ky Tu:");
	
	char chr;

	scanf("%c",&chr);
	
	if(chr >= 'a' && chr <= 'z'){
		
		printf("la chu in thuong!");
		
	}else if(chr >='A' && chr <= 'Z'){
		
		printf("La chu in Hoa!");
		
	}else if(chr >= '0' && chr <='9'){
		
		printf("La chu so!");
		
	}else{
		
		printf("La Ky Ttu Dac Biet!");
	}
}

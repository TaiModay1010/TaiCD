#include <stdio.h>
#include <string.h>

int main(){
	char str[20];
	printf("Nhap vao chuoi:\n");
	scanf("%s",str);
	
	printf("chuoi vua nhap la: %s\n",str);
	int l = strlen(str);
	for(int i =0;i<l/2;i++){
		char temp = str[i];
		str[i]=str[l-i-1];
		str[l-i-1]=temp;
	}
	
	printf("chuoi sau khi dao thu tu la: %s\n",str);
	
	
}

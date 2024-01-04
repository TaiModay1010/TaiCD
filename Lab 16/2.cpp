#include <stdio.h>
#include <string.h>

int main(){
	char str[20];
	printf("Nhap chuoi:\n");
	scanf("%s",str);
	 int l = strlen(str);
	
	printf("chuoi vua nhap la: %s\n",str);
	for(int i=0;i<l;i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i]-= 32;
		}
	}
	
	printf("chuoi sau khi thay doi la: %s",str);
}

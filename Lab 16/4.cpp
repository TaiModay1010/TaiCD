#include <stdio.h>
#include <string.h>

typedef struct Sinhvien{
	char name[20];
	int mark;	
}Sinhvien;

int main(){
	Sinhvien sv[20];
	for(int i=0;i<2;i++){
		printf("Nhap ten sinh vien:");
		scanf("%s",sv[i].name);
		printf("diem: ");
		scanf("%d",&sv[i].mark);
	}
	
	for(int i=0;i<20-1;i++){
		for(int j=0;j<2-i-1;j++){
			sv temp;
			if(strcmp(sv[j].name,sv[j+1].name)>0){
				strcpy(temp.name,sv[j].name);
				temp.mark = sv[j].mark;
				strcpy(sv[j].name,sv[j+1].name);
				strcpy(sv[j+1].name,temp.name);
				
			}
		}
	}
	
	for(int i=0;i<2;i++){
		printf("%s %d\n",sv[i].name,sv[i].mark);
	}
	
}

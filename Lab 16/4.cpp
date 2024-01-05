#include <stdio.h>
#include <string.h>

typedef struct Sinhvien{
	char name[20];
	int mark;	
}Sinhvien;

int main(){
	Sinhvien sv[20];
	for(int i=0;i<20;i++){
		printf("Nhap ten sinh vien:");
		scanf("%s",sv[i].name);
		printf("diem: ");
		scanf("%d",&sv[i].mark);
	}
	
	for(int i=0;i<20-1;i++){
		for(int j=0;j<20-i-1;j++){
			char temp[20];
			if(strcmp(sv[j].name,sv[j+1].name)>0){
				strcpy(temp,sv[j].name);
				strcpy(sv[j].name,sv[j+1].name);
				strcpy(sv[j+1].name,temp);
				temp[20] = sv[j].mark;
				sv[j].mark = sv[j+1].mark;
				sv[j+1].mark = temp[20];
				
			}
		}
	}
	
	for(int i=0;i<20;i++){
		printf("%s %d\n",sv[i].name,sv[i].mark);
	}
	
}

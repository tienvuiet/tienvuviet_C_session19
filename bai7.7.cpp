#include<stdio.h>
#include<string.h>
typedef struct{
	int id;
	char name[100];
	int age;
	char phoneNumber[100];
} Student ;
void studentOutput(Student students[], int size);
void deleteStudent(Student students[], int size);
int main(){
	int size =5;
	Student students[5]={
		{1,"Vu Viet Tien",18,"0915402354"},
		{2,"Tien Nguyen",19,"0142151315"},
		{3,"Pham Hai Giang",20,"0153121325"},
		{4,"Pham Tong Minh An",18,"01325153125"},
		{5,"Vu Duc Thang",18,"091251235235"},
	};
	studentOutput(students,size);
	deleteStudent(students,size);
	return 0;
}
void studentOutput(Student students[], int size){
	printf("mang sinh vien ban dau la: \n");
	for(int i=0;i<size;i++){
		printf("id: %d\n",students[i].id);
		printf("name: %s\n",students[i].name);
		printf("age: %d\n",students[i].age);
		printf("phone: %s\n",students[i].phoneNumber);
	}
}
void deleteStudent(Student students[], int size){
	int id;
	printf("nhap vao id muon xoa: ");
	scanf("%d",&id);
	fflush(stdin);
	for (int i = id-1; i < size - 1; i++) {
        students[i] = students[i + 1];  
    }
		size--;
	printf("mang sinh vien sau khi xoa la: ");
		for(int i=0;i<size;i++){
		printf("id: %d\n",students[i].id);
		printf("name: %s\n",students[i].name);
		printf("age: %d\n",students[i].age);
		printf("phone: %s\n",students[i].phoneNumber);
	}
}

#include <stdio.h>
int main(){
	FILE *fptr;
	int id;
	char name[30];
	float salary;
	
	fptr = fopen("emp.txt","w+");
	
	if (fptr == NULL){
		printf("File does not exist");
	}
	else{
		printf("Enter the id: ");
		scanf("%d",&id);
		fprintf(fptr,"Id= %d\n",id);
		printf("Enter the name: ");
		scanf("%s",name);
		fprintf(fptr,"name= %s\n",name);
		printf("Enter the salary: ");
		scanf("%f",&salary);
		fprintf(fptr,"salary= %f\n",salary);
		fclose(fptr);
		
	}
	
	return 0;
}

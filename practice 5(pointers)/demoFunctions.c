#include <stdio.h>

int main()
{
	int i,j;
	i =1;
	j =9;
	printf("Value i\t%d\nAddress\t%p\n",i,&i);
	printf("Value j\t%d\nAddress\t%p\n",j,&j);
	printf("--------calling VariableInterchange--------\n");
	VariableInterchange(i,j);//it would not have affected the original variables as only local variable of the function gets interchanged
	printf("Value i\t%d\nAddress\t%p\n",i,&i);
	printf("Value j\t%d\nAddress\t%p\n",j,&j);
	printf("--------calling VariableInterchangeP--------\n");
	VariableInterchangeP(&i,&j);//this will change the variables as the mainpulation happens at the memory address of those variables
	printf("Value i\t%d\nAddress\t%p\n",i,&i);
	printf("Value j\t%d\nAddress\t%p\n",j,&j);
	return 0;
}

void VariableInterchangeP(int *a,int *b){
	int temp=*a;
	*a = *b;
	*b = temp;
	
}
void VariableInterchange(int a,int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

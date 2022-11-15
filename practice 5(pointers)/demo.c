
#include <stdio.h>

int main()
{
	int *p,a;
	
	a=5;
	p = &a;
	
	printf("Address of a:             \t\t %d\n",&a); //address of a
	printf("Address of a(hexadecimal):\t\t %p\n",&a); //hexadecimal address of a
	printf("Address of a accessed by p:\t\t %d\n",p); //address of a accessed through pointer p
	printf("Address of a by p(hexadecimal):\t\t %p\n",p); //hex address of a accessed through pointer p
	printf("Value at a:                   \t\t %d\n",a); //value at a
	printf("Value at address of a:      \t\t %d\n",*p); // value at address of a = a
	
	a=11; // even after changing the value of a; address will not change;
	
	printf("Address of a:             \t\t %d\n",&a); //address of a
	printf("Address of a(hexadecimal):\t\t %p\n",&a); //hexadecimal address of a
	printf("Address of a accessed by p:\t\t %d\n",p); //address of a accessed through pointer p
	printf("Address of a by p(hexadecimal):\t\t %p\n",p); //hex address of a accessed through pointer p
	printf("Value at a:                   \t\t %d\n",a); //value at a
	printf("Value at address of a:       \t\t %d\n",*p); // value at address of a = a ; same as *(&a)
	
	
	return 0;
}


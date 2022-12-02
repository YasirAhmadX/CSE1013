#include <stdio.h>
int main(){
	printf("Inside main function.\n");
	display();
	printf("Inside main function.\n");
	return 0;
}

void display(){
	printf("Inside display function.\n");
}

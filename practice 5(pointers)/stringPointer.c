#include <stdio.h>

int main(){
	char *s,str[]={"School"};
	s=str;
	for(int i;i<6;i++){
		printf("Address: %p",s);
		printf("\tValue: %c\n",*s);
		s++;
	
	}
	return 0;

}
//sequential memory address 1byte apart

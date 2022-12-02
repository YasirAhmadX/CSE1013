//WAP to display vowels, no. of upper case, lower case letters in given string and display the string character by character
#include <stdio.h>

int main(){
	int n,i;
	printf("Enter the length of string: ");
	scanf("%d",&n);
	char s[n],*p;
	p=s;
	printf("Enter the string: ");
	scanf("%s",p);
	printf("String: %s\n",s);
	int upr=0,lwr=0,v=0;
	char vowels[]="AaEeIiOoUu";
	printf("Vowels: ");
	for(i=0;i<n;i++){
		if(*(p+i)>64 && *(p+i)<91){
			upr++;
		}
		else if(*(p+i)>96 && *(p+i)<123){
			lwr++;
		}
		int j;
		for(j=0;j<10;j++){
			if(*(p+i)==*(vowels +j)){
				printf("%c ",*(p+i));
				v++;
			}
		}
	}
	printf("\nNumber of vowels: %d\n",v);
	printf("Number of upper case letters: %d\n",upr);
	printf("Number of lower case letters: %d\n",lwr);
	printf("String (character by character ): \n");
	for(i=0;i<n;i++){
		printf("%c\n",*(p+i));
	}
	return 0;
}


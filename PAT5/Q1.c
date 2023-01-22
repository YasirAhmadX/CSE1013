#include <stdio.h>
int main(){
	char s[40];
	char vowels[]="AEIOUaeiou";
	scanf("%[^\n]",s);
	char V[40],C[40];
	int i=00,j=00;
	for(i=0;s[i]!='\0';i++){
		for(j=0;j<10;j++){
			if(s[i]==vowels[j]){
				printf("%c",s[i]);
				break;
			}
		}
	}
	printf("\n");
	for(i=0;s[i]!='\0';i++){
		int c=0;
		for(j=0;j<10;j++){
			if(s[i]==vowels[j]){
				c=1;
			}
		}
		if(c==0){
			printf("%c",s[i]);
		}
	}
	return 0;
}

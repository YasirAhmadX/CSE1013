#include <stdio.h>
#include <string.h>

int main(){
	char s[5][30];
	char c;
	int i,j;
	for(i=00;i<5;i++){
		scanf("%[^\n]",s[i]);
		scanf("%c",&c);
	}
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(strcmp(s[j],s[j+1])>0){
				char temp[30];
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%s\n",s[i]);
	}
	return 0;
}

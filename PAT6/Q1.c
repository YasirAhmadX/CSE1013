#include <stdio.h>
#include <string.h>

struct word{
	char letters[20];
	int occurrence;
};

int main(){
	struct word words[40];
	
	char s[100]; //sentence
	scanf("%[^\n]*c",s);
	printf("%s\n",s);
	
	int l=strlen(s);
	printf("%d\n",l);
	
	int i,j=0,k=0;//j is position of word,k is position of Word,
	char Word[20];
	
	for(i=0;i<=l;i++){
		if(s[i]==' ' || s[i]=='\0'){
			Word[k]='\0';
			k=0;
			int r=0,a=0;
			for(a=0;a<j;a++){
				if(strcmp(words[a].letters,Word)==0){
					words[a].occurrence++;
					r=1;
				}
			}
			if(r==0){
				j++;
				strcpy(words[j].letters,Word);
				words[j].occurrence=1;
			}
		}
		else{
			//printf("%c\n",s[i]);
			Word[k]=s[i];
			k++;
		}
	}
	for(i=0;i<=j;i++){
		if(words[i].occurrence>0){
			printf("%s -> %d\n",words[i].letters,words[i].occurrence);
		}
	}
}

#include <stdio.h>
#include <string.h>

void revString(char s[100],int i,int len){
    if(i>=len/2){
        printf("%s",s);
    }
    else{
        char *p=s;
        char temp = *(p+i);
        *(p+i) = *(p+(len-1)-i);
        *(p+(len-1)-i)=temp;
        i++;
        revString(s,i,len);
    }
}


int main(){
    char str[100];
    scanf("%[^\n]",str);
    revString(str,0,strlen(str));
    return 0;
}

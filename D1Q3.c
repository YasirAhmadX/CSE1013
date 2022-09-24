//WAP to check palindrome strings
#include <stdio.h>

void main(){
    int i,len=10;
    int palindrome = 1; //bool //true
    char s[len];
    printf("Enter 10 character string: ");
    scanf("%s",s);

    for(i=0;i<len/2;i++){
        //printf("%c - %c\t%d\n",s[i],s[len-1-i],palindrome);
        if (s[i]!=s[len-1-i]){
            palindrome = 0; //false
            //printf("\t%d\n",palindrome);
            break;
        }
    }
    
    printf(palindrome?"Palindrome!!":"Not a palindrome!!");
}

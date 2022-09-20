//WAP print vowels in the given string
#include <stdio.h>

int main() {
    char s[10];
    printf("Enter string: ");
    scanf("%s",s);
    int i,c=0;
    for (i=0;i<10;i++){
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            printf("Index > %d > Vowel > %c \n",i,s[i]);
            c++;
        }
    }
    printf("No. of vowels %d",c);

    return 0;
}

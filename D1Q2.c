// WAP to reverse a string
#include <stdio.h>

int main() {
    char s1[10],s2[10];
    printf("Enter string of 10 characters: ");
    scanf("%s",s1);
    int i;
    for (i=9;i>=0;i--){
        s2[9-i] = s1[i];
    }
    printf("Reversed string is: %s",s2);
    return 0;
}

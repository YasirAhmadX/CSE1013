//swap a&b
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}

//find the sum of all the elements stored in an array
#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("Sum of array: %d",sum);

    return 0;
}

//fetch the value stored in a particular index of the array
#include <stdio.h>

int main()
{
    int n;
    printf("Enter length of the array: ");
    scanf("%d",&n);
    printf("Enter array elements>\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s;
    printf("Enter index to fetch its value: ");
    scanf("%d",&s);
    if(s<n){
        printf("%d",arr[s]);
    }
    else{
        printf("Index out of range.");
    }
    

    return 0;
}

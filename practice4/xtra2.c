//bubble short
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    //sorting
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

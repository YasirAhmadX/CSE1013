//linear search
#include <stdio.h>
int main(){
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter number into the array>\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s,r=0;
    printf("Search array for : ");
    scanf("%d",&s);
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            r=1;
            printf("Value : %d , in present in array @ index : %d\n",s,i);
        }
    }
    if(r=0){
        printf("Value not present in given array.");
    }
}

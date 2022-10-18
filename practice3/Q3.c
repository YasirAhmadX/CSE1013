#include <stdio.h>
int main(){
    int n,g[5];
    printf("Enter 5 numbers for g: ");
    for(int i=0;i<5;i++){
        scanf("%d",&g[i]);
    }
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(n%g[i]==0){
            printf("%d\n",g[i]);
        }
    }
    return 0;
}

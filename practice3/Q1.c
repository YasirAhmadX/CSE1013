#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=5;i<=n;i++){
        if(i%35==0){
            printf("%d\n",i);
        }
    }
    return 0;
}

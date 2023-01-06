#include <stdio.h>
struct Student{
    char name[20];
    int roll,h;
};
int main(){
    //input n
    int n=0,i=0,j=0;
    scanf("%d",&n);
    
    struct Student stud[n]; 
    //input structure
    for(i=0;i<n;i++){
        scanf("%s",stud[i].name);
        scanf("%d",&stud[i].roll);
        scanf("%d",&stud[i].h);
    }
    //sorting using height as key
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(stud[j].h>stud[j+1].h){
                struct Student temp=stud[j];
                stud[j]=stud[j+1];
                stud[j+1]=temp;
            }
        }
    }
    //counting different heights
    int c=1,lh=stud[0].h;
    for(int i=0;i<n;i++){
        if(stud[i].h==lh){
            continue;
        }
        else{
            c++;
            lh=stud[i].h;
        }
    }
    
    printf("%d\n",c);
    //displaying names
    lh=stud[0].h;
    for(i=0;i<n;i++){
        if(stud[i].h==lh && i!=0){
            continue;
        }
        else{
            printf("%s\n",stud[i].name);
            lh=stud[i].h;
            
        }
        //printf("%s",stud[i].name);
    }

    return 0;
}

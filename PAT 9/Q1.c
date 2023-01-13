#include <stdio.h>
#include <string.h>
struct Student{
    char name[20];
    int roll;
    int marks;
};

int main(){
    struct Student std[5];
    
    for(int i=0;i<5;i++){
        char r[50];
        int m;
        scanf("%s",r);
        scanf("%s",r);
        scanf("%s",std[i].name);
        scanf("%d",&std[i].marks);
        
        //std[i].roll=i+1;
        int l=strlen(r);
        if(r[l-1]=='1'){
            std[i].roll=1;
        }
        else if(r[l-1]=='2'){
            std[i].roll=2;
        }
        else if(r[l-1]=='3'){
            std[i].roll=3;
        }
        else if(r[l-1]=='4'){
            std[i].roll=4;
        }
        else{
            std[i].roll=5;
        }
        
    }
    for(int i=0;i<5;i++){
        int mmi=i;//max marks index
        for(int j=i;j<5;j++){
            if(std[j].marks>std[mmi].marks){
                mmi=j;
            }
        }
        struct Student temp = std[mmi];
        std[mmi] = std[i];
        std[i] = temp;
    }
    
    for(int i=0;i<5;i++){
        printf("roll number%d\n",std[i].roll);
        printf("%s\n",std[i].name);
        printf("%d\n",std[i].marks);
    }
    
    return 0;
    
}

#include <stdio.h>
int main(){
    int n,o;
    printf("Enter number of students: ");
    scanf("%d",&n);
    int Marks[n];
    char RegNo[n][10];
    for(int i=0;i<n;i++){
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&Marks[i]);
        printf("Enter Registration number of student %d: ",i+1);
        scanf("%s",&RegNo[i]);
    }
    int r=1;
    while(r){
        printf("\nMENU\n1.Best\n2.Average\n3.Worst\n4.Exit\n: ");
        scanf("%d",&o); 
        switch(o){
            case 1:
            printf("::Best::\n");
                for(int i=0;i<n;i++){
                    if(Marks[i]>=90){
                        printf("RegNo: %s  Marks: %d\n",RegNo[i],Marks[i]);
                    }
                }
                break;
            case 2:
                printf("::Average::\n");
                for(int i=0;i<n;i++){
                    if(50<=Marks[i]&& Marks[i]<90){
                        printf("RegNo: %s  Marks: %d\n",RegNo[i],Marks[i]);
                    }
                }
                break;
            case 3:
                printf("::Worst::\n");
                for(int i=0;i<n;i++){
                    if(Marks[i]<50){
                        printf("RegNo: %s  Marks: %d\n",RegNo[i],Marks[i]);
                    }
                }
                break;
            case 4:
                r=0;
                break;
                
            default:
                printf("Invalid input\n");
                break;
                
        }
    }
    return 0;
}

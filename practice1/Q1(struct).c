//Q1 with structures
//WAP a prgram to input n number of student details and display it back
#include <stdio.h>
struct stud_details{
    int age;
    float height,weight;
    char name[20],RegNo[9+1],Gender[1+1],Address[50],MobileNo[10+1]; //adding room for null characters.
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct stud_details s[n];
    for(int i=0;i<n;i++){
        printf("-------------------\n");
        printf("\nEnter name of the student %d: ",i+1);
        scanf("%s",s[i].name); //beware string will terminate at "<space>";scanf("%[^\n]%*c",s[i].name); should do the job
        printf("Enter RegNo: ");
        scanf("%s",s[i].RegNo);
        printf("Enter Age: ");
        scanf("%d",&s[i].age);
        printf("Enter Gender {M,F,L,G,B,T,Q}: ");
        scanf("%s",s[i].Gender);
        printf("Enter height(cms): ");
        scanf("%f",&s[i].height);
        printf("Enter weight(kgs): ");
        scanf("%f",&s[i].weight);
        printf("Enter Mobile No: ");
        scanf("%s",s[i].MobileNo);
        printf("Enter address: ");
        scanf("%s",s[i].Address);
    }
    
    for(int i=0;i<n;i++){
        printf("-------------------\n");
        printf("NAME: %s\n",s[i].name);
        printf("REGISTRATION NUMBER: %s\n",s[i].RegNo);
        printf("GENDER: %s\n",s[i].Gender);
        printf("AGE: %d\n",s[i].age);
        printf("HEIGHT: %.2f\n",s[i].height);
        printf("WEIGHT: %.2f\n",s[i].weight);
        printf("CONTACT NUMBER: %s\n",s[i].MobileNo);
        printf("ADDRESS: %s\n",s[i].Address);

    }

    return 0;
}

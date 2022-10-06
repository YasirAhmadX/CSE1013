//WAP to take student info as input and display
#include <stdio.h>

int main() {
    int age;
    float height,weight;
    char name[20],RegNo[9+1],Gender[1+1],Address[50],MobileNo[10+1];//adding room for null characters.
    printf("Enter name of the student: ");
    scanf("%s",name);//beware string will terminate at "<space>";scanf("%[^\n]%*c",s[i].name); should do the job
    printf("Enter RegNo: ");
    scanf("%s",RegNo);
    printf("Enter Age: ");
    scanf("%d",&age);
    printf("Enter Gender {M,F,L,G,B,T,Q}: ");
    scanf("%s",Gender);
    printf("Enter height(cms): ");
    scanf("%f",&height);
    printf("Enter weight(kgs): ");
    scanf("%f",&weight);
    printf("Enter Mobile No: ");
    scanf("%s",MobileNo);
    printf("Enter address: ");
    scanf("%s",Address);
    printf("-------------------\n");
    printf("NAME: %s\n",name);
    printf("REGISTRATION NUMBER: %s\n",RegNo);
    printf("GENDER: %s\n",Gender);
    printf("AGE: %d\n",age);
    printf("HEIGHT: %.2f\n",height);
    printf("WEIGHT: %.2f\n",weight);
    printf("CONTACT NUMBER: %s\n",MobileNo);
    printf("ADDRESS: %s",Address);

    return 0;
}

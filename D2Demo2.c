//Simple interest and amount
#include <stdio.h>
void main(){
    float p,n,r,si;
    
    printf("Enter Principle,Rate of interest and Time: ");
    scanf("%f%f%f",&p,&r,&n);
    
    si = p*n*r/100; //simple interest
    
    printf("Simple interest is: %.3f\n",si);
    
    printf("Amount is: %.3f",(p + si));//amount
}

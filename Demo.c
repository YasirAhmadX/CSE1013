#include <stdio.h> //header file @ start of program
 int main(){ //main function
     int a,b,c,z; //declaration
     
     printf("Enter values for a,b: "); //initialization
     scanf("%d%d",&a,&b); //
     
     z = a+b+c; //operation // c has garbage value
     
     printf("%d",z); //output
     return 0; //return 
     //end of program
 }

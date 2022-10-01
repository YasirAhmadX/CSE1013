//WAP to create a calculator; user wants to do arithemetic operations for the given number. But he requires selecting the option from the listed menu.
//So he/she wants to select a choice based on the given list.
#include <stdio.h>
void main()
{
	float x,y;
	int z;
	printf("Enter two numbers\n");
	scanf("%f%f",&x,&y);
	printf("x=%f\ny=%f\n\nChoose an option!!!\n1}Add integers\n2}Subtract integers\n3}Multiply integers\n4}Divide integers\n\n",x,y);
	scanf("%d",&z);
	switch(z)
	{
	  case 1:
	      printf("If added=%f\n",x+y);
        break;

    case 2:

	   printf("If subtracted=%f\n",x-y);
	    break;
    case 3:
       printf("If multiplied=%f\n",x*y);
        break;
    case 4:

       printf("If divided=%f\n",x/y);
       break;

    default:

       printf("Invalid input!\nLet me help you!!!\n");
       printf("\nIf added=%f\n",x+y);
       printf("If subtracted=%f\n",x-y);
       printf("If multiplied=%f\n",x*y);
       printf("If divided=%f\n",x/y);
   }
    
    printf("Press 1 to calculate again or any number to exit  ");
    scanf("%d",&z);
    if(z==1)
    main();
}

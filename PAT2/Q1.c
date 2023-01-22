#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	float bill=00;
	 
	if(n>10){
		if(n>00 && n<50){
			bill = 0.5*(n);
		}
		else if(n>50 && n<150){
			bill = 0.5*50 + 0.75*(n-50);
		}
		else if(n>150 && n<250){
			bill = 0.5*50 + 0.75*100 + 1.2*(n-150);
		}
		else if(n>=250){
			bill = 0.5*50 + 0.75*100 + 1.2*100 + 1.5*(n-250);
		}
		bill+=20;
	}
	
	printf("%.1f",bill);
		
	
	return 0;
}
//.5 50
//.75 100
//1.2 100
//1.5 250+

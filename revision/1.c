/*
a + a*b^3 + a*b^6 + a*b^9 + ....
calculate sum of given series for given input a,b and n=number of terms
*/



#include <stdio.h>

int main(){
	
	int n,a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&n);
	
	int i=0,sum=0;
	for(i=0;i<n;i++){
		int B=1,j=0;
		for(j=0;j<3*i;j++){
			B*=b;
		}
		//printf("%d\n",a*B);
		sum += a*(B);
	}
	
	printf("%d",sum);
	
	return 0;
}

/* compute
sin(x) = x - (x^3)/3! + (x^5)/5! - (x^7)/7! ... until next term become smaller than 10^-5
*/

#include <stdio.h>

float power(float a,int n){
	float i=0,A=1;
	for(i=00;i<n;i++){
		A*=a;
	}
	return A;
}

float factorial(float n){
	if(n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}

double sin(float x){
	double s=0;
	
	int i=1,j=1;
	while(1){
		double term = power(x,i)/factorial(i);
		//printf("%f\n",term);
		if(term<0.000001){
			break;
		}
		else{
			s+=term*j;
		}
		i+=2;
		
		j*= -1;
	}
	//printf("s=%f\n",s);
	return s;
}

int main(){
	float x;
	scanf("%f",&x);
	double v=sin(x);
	printf("%f",v);
	return 0;
}

#include <stdio.h>

struct Dist{
	int ft;
	float in;
};

int main(){
	
	struct Dist d1,d2,sum;
	
	scanf("%d",&d1.ft);
	scanf("%f",&d1.in);
	scanf("%d",&d2.ft);
	scanf("%f",&d2.in);
	
	sum.ft = d1.ft + d2.ft;
	sum.in = d1.in + d2.in;
	
	while(sum.in>=12){
		sum.in-=12;
		sum.ft++;
	}
	
	printf("%d'-%.1f\"",sum.ft,sum.in);
	
	return 0;
}

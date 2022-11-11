#include <stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	
	int N[n];
	for(i=0;i<n;i++){
		scanf("%d",&N[i]);
	}
	
	int sum=0;
	for(i=0;i<n;i++){
		sum+= (n-i)*N[i];
	}
	printf("%d",sum-N[0]);
	return 0;
}
// 1 2 3 4
//(1+2)+(1+2+3)+(1+2+3+4)
//(4-1 x1)+(3x2)+(2x3)+(1x4)

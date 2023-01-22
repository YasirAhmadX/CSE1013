#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=0,sum=0;
	for(i=2;i<=n;i++){
		int j,p=1;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				p=0;
				break;
			}
		}
		if(p==1){
			//printf("%d",i);
			sum+=i;
		}
	}
	
	printf("%d",sum);
	return 0;
}

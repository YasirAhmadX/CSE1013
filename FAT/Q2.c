#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n],i,j;
	for(i=0;i<n-1;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++){
		int chk=0;
		for(j=0;j<n-1;j++){
			if(i==arr[j]){
				chk=1;
			}
		}
		if(chk==0){
			printf("%d",i);
		}
	}
	return 0;
}

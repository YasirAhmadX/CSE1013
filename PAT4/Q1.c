#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n],i,j;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				int k;
				for(k=j;k<n-1;k++){
					arr[k]=arr[k+1];
				}
				n--;
			}
		}
	}
	
	for(i=00;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}

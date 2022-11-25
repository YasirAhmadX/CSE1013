#include <stdio.h>
int main(){
	int arr[3][3]={{9,7,8},{6,5,4},{3,2,1}};
	int *a=&arr[0][0];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf(" %d ",*(a+3*i+j));
		}
		printf("\n");
	
	}
	return 0;
}

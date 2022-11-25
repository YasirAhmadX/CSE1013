#include <stdio.h>
int main(){
	int arr[]={2,4,6,8};
	int *a=arr;
	for(int i=0;i<4;i++){
		printf("Value @ index %d: %d\n",i,*(a+i));
		printf("Address of index %d: %p\n",i,(a+i));
	}
	return 0;
}

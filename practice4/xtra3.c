//selection sort
#include <stdio.h>

int main(){
	int n;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	int arr[n],*p;
	p=arr;
	for(int i=0;i<n;i++){
		scanf("%d",p+i);
	}
	for(int i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
	printf("\n");
	
	//sorting
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(*(p+min)>*(p+j)){
				min=j;
			}
		int temp = *(p+min);
		*(p+min) = *(p+i);
		*(p+i) = temp;
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
	return 0;
}

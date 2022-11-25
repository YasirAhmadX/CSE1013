#include <stdio.h>
int main()
{
	int n;
	printf("Enter number of elements in the array: ");
	scanf("%d",&n);
	int arr[n],i;
	int *p=arr;
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	printf("Array : ");
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
	//reverse
	for(i=0;i<n/2;i++){
		int temp=*(p+i); //*(p+i)=arr[i]
		*(p+i)=*(p+(n-1)-i); //*(p+(n-1)-i) = arr[(n-1)-i]
		*(p+(n-1)-i)=temp;
	}
	printf("\nReversed array : ");
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
	
	return 0;
}

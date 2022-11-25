#include <stdio.h>
//array is stored sequentially in memory

int main()
{
	int a[]={3,1,4,1,5,9,2,6,5,7,2};
	for(int i=0;i<11;i++){
		printf("%d",a[i]);
		printf("\t%p\n",&a[i]);
	}
	printf("\n");
	
	
	return 0;
}


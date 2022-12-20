#include <stdio.h>
#include <string.h>
struct book_details{
	char BookName[20],Author[20];
	int BookCode;
	
};
/*
struct shelfdetails{
	int Floor,Row,Column;
	book books[10];
}*/

int main(){
	int n,i,j;
	printf("Enter number of books: ");
	scanf("%d",&n);
	struct book_details Bk[n];
	for(i=0;i<n;i++){
		printf("Details of Book %d:\n",i+1);
		printf("Enter book name: ");
		scanf("%s",Bk[i].BookName);
		printf("Name of the author: ");
		scanf("%s",Bk[i].Author);
		printf("Book ID code: ");
		scanf("%d",&Bk[i].BookCode);
	}
	
	printf("\n\n::Welcome to the library::\n");
	
	printf("Which book you want:\n");
	
	for(i=0;i<n;i++){
		printf("%d : %s \n",i+1,Bk[i].BookName);
	}
	scanf("%d",&j);
	printf("Selected book>>");
	printf("Book Name: %s\n",Bk[j-1].BookName);
	printf("Book Author: %s\n",Bk[j-1].Author);
	printf("Book Code: %d",Bk[j-1].BookCode);
	
	
	return 0;
}

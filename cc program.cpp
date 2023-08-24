#include<stdio.h>
#include<conio.h>
int main()
{
	int E,P,N,CC;
	printf("\n to find cyclometric complexity");
	printf("enter no of edges:");
	scanf("%d",&E);
	printf("enter no of predicate nodes:");
	scanf("%d",&P);
	printf("enter no of nodes:");
	scanf("%d",&N);
	CC=E-N+(2*P);
	printf("\n the cyclomertic complexity is %d",CC);
	getch();
}
